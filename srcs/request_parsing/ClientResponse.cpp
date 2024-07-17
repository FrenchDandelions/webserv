#include "Client.hpp"
#include "Error.hpp"
#include "Utils.hpp"
#include <asm-generic/errno.h>
#include <cerrno>
#include <dirent.h>
#include <ostream>

bool Client::findIndex(std::string &url) {
  vec_string vector = _location->getIndexFile();
  std::string tmp;
  struct stat statbuf;
  size_t it = 0;
  for (; it < vector.size(); it++) {
    tmp = url + vector[it];
    if (stat(tmp.c_str(), &statbuf) == 0) {
      break;
    }
    if (errno == EACCES)
      _statusCode = 403;
    else if (_statusCode != 403 && errno == ENOENT) {
      continue;
    }
  }
  if (_statusCode >= 400)
    return (true);
  if (it == vector.size())
    return (false);
  url += vector[it];
  return (true);
}

void Client::buildListingDirectory(std::string &url) {
  _uri = "." + _uri;
  _response.setStatusCode(200);
  _response.setDate();
  _response.setHeader("Content-Type", "text/html");
  addConnectionHeader();
  std::string body = "<html>\r\n";
  body += "<head><title>Index of ";
  body += _uri + "</title></head>\r\n";
  body += "<body>\r\n<h1>Index of ";
  body += _uri + "</h1>";
  if (_uri != url)
    body += "<hr><pre><a href=\"../\">../</a>\r\n";
  DIR *dir;
  dir = opendir(_uri.c_str());
  if (dir == NULL) {
    std::cout << RED << "buildListingDirectory: dir = NULL" << RESET
              << std::endl;
    if (errno == EACCES)
      _statusCode = 403;
    else if (errno == ENONET)
      _statusCode = 404;
    else
      _statusCode = 500;
    return;
  }
  struct dirent *ent;
  errno = 0;
  while (true) {
    ent = readdir(dir);
    while (ent && ent->d_name[0] == '.') {
      if (ent->d_name[1] == '.' && ent->d_name[2] == '\0' && url != _uri)
        break;
      ent = readdir(dir);
    }
    if (ent == NULL)
      break;
    std::cout << YELLOW << "ent: " << ent->d_name << RESET << std::endl;
    struct stat file;
    if (stat(ent->d_name, &file) == -1) {
      std::cout << RED << "buildListingDirectory: stat = -1; ent->d_name ="
                << ent->d_name << RESET << std::endl;
      if (errno == EACCES) {
        _statusCode = 403;
      } else
        _statusCode = 500;
      return;
    }
    std::string time = body += "<a href=\"";
    body += ent->d_name;
    body += "\">";
    body += ent->d_name;
    body += "</a> Date: " + getDateOfFile(file.st_mtim.tv_sec);
    body += " ";
    if (ent->d_type == DT_REG) {
      std::ostringstream ss;
      ss << file.st_size;
      body += ss.str();
    } else
      body += "-";
    body += "\r\n";
  }
  body += "</pre><hr></body>\r\n";
  body += "</html>\r\n";
  _response.setBody(body);
  _response.BuildResponse();
}

void Client::findPages(const std::string &urlu) {
  std::string url = "." + urlu;
  if (_location->isADir() == true) {
    if (_uri[_uri.size() - 1] == '/') {
      if (findIndex(url) == false) {
        return (buildListingDirectory(url));
      }
    } else
      url += _uri.substr(_uri.find_last_of('/'));
  }
  std::ifstream file(url.c_str(), std::ios::in);
  std::cout << RED << "trying  to open file: " << url << RESET << std::endl;
  if (file.is_open() == false) {
    std::cout << RED << "failed to open file: " << url << RESET << std::endl;
    if (access(url.c_str(), F_OK) == -1)
      _statusCode = 404;
    else
      _statusCode = 403;
    return;
  }
  std::string s;
  while (getline(file, s)) {
    std::cout << PURP << "adding line to body: " << s << std::endl;
    _response.addLineToBoddy(s);
  }
  if (file.bad()) {
    std::cout << RED << "fail to read all file" << RESET << std::endl;
    _statusCode = 400;
  }
}

void Client::createResponseBody(void) {
  if (_statusCode > 0 && _statusCode < 400) {
    std::cout << PURP2 << "uri : " << _location->getUrl() << " ?" << RESET
              << std::endl;
    findPages(_location->getUrl());
  }
  if (_statusCode >= 400) {
    _response.setBody(findErrorPage(_statusCode, *_server));
  }
}

void Client::addConnectionHeader(void) {
  if (_version == 0) {
    _response.setHeader("Connection", "close");
    _keepConnectionAlive = false;
    return;
  }
  if (_statusCode == 400 || _statusCode == 408 || _statusCode == 413 ||
      _statusCode == 414 || _statusCode == 500 || _statusCode == 501) {
    _response.setHeader("Connection", "close");
    _keepConnectionAlive = false;
  } else {
    _keepConnectionAlive = true;
    _response.setHeader("Connection", "keep-alive");
  }
  return;
}

void Client::defaultHTMLResponse(void) {
  _response.setStatusCode(_statusCode);
  _response.setDate();
  _response.setHeader("Content-Type", "text/html");
  _response.setBody(findErrorPage(_statusCode, *_server));
  _response.setHeader("Content-Length", _response.getBodySize());
}

void Client::handleRedirection(void) {
  _statusCode = _location->getRedirCode();
  defaultHTMLResponse();
  addConnectionHeader();
  _response.setHeader("Location", _location->getRedirection());
  _response.BuildResponse();
  return;
}

void Client::handleError(void) {
  defaultHTMLResponse();
  addConnectionHeader();
  _response.BuildResponse();
  return;
}

void Client::buildResponse(void) {
  if (_statusCode < 400 && _location->isRedirected()) {
    return (handleRedirection());
  }
  if (_statusCode >= 400)
    return (handleError());
  createResponseBody();
  if (_statusCode >= 400) {
    _response.reset();
    return (handleError());
  }
  _response.setStatusCode(_statusCode);
  _response.setDate();
  addConnectionHeader();
  _response.setHeader("Content-Type", "text/html");
  _response.setHeader("Content-Length", _response.getBodySize());
  _response.BuildResponse();
}

void Client::add400Response(void) {
  if (_epollIn == true)
    return;
  Response error400;
  error400.setStatusCode(400);
  error400.setDate();
  error400.setHeader("Content-Type", "text/html");
  error400.setBody(findErrorPage(_statusCode, *_server));
  error400.setHeader("Content-Length", _response.getBodySize());
  error400.setHeader("Connection", "close");
  error400.BuildResponse();
  _response.add400(error400);
  _epollIn = true;
  _keepConnectionAlive = false;
  return;
}

bool Client::sendResponse(std::string &response) {
  if (_response.isReady() == false)
    buildResponse();
  response = _response.getResponse();
  // std::cout << BLUE << "response:\n" << response << RESET << std::endl;
  bool ret = _response.isNotDone();
  if (ret == false)
    resetClient();
  return (ret);
}