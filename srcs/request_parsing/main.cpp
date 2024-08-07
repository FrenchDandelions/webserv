#include "Client.hpp"
#include "Error.hpp"
#include "Location.hpp"
#include "Port.hpp"
#include "ServerConf.hpp"
#include "Webserv.hpp"
#include <exception>
#include <iostream>
#include <utility>

int gSignal = 0;

int main() {
  try {
    // std::string http_request = "";
    std::string http_request = "POST /upload HTTP/1.1\n";
    http_request += "host: localhost4247\r\n";
    // http_request += "GET /favicon.ico HTTP/1.0\r\n";
    // http_request += "host: bonjour\r\n";
    // http_request += "Content-Length 10\r\n";
    http_request +=
        "Content-Type multipart/form-data; boundary=----BoundaryString\r\n";
    http_request += "\r\n";
    http_request += "------BoundaryString\r\n";
    http_request += "Content-Disposition: form-data; name=\"file1\"; "
                    "filename=\"file1.txt\"\r\n";
    http_request += "Content-Type: text/plain\r\n";
    http_request += "\r\n";
    http_request += "Hello\r\n";
    http_request += "------BoundaryString\r\n";
    http_request += "Content-Disposition: form-data; name=\"file2\"; "
                    "filename=\"file2.jpeg\"\r\n";
    http_request += "Content-Type: image/jpeg\r\n";
    http_request += "\r\n";
    http_request += "coucou1PNG\r\n";
    http_request += "------BoundaryString\r\n";
    http_request += "Content-Disposition: form-data; name=\"file2\"; "
                    "filename=\"file2.json\"\r\n";
    http_request += "Content-Type: application/json\r\n";
    http_request += "\r\n";
    http_request += "{\"key\": \"value\"}\r\n";
    http_request += "\r\n";
    http_request += "------BoundaryString--\r\n";

    // http_request += "bonjour=2\n";
    // http_request += "bonjour=20";
    ServerConf *cf = new ServerConf;
    cf->addPortOrHost("127.0.0.1:443");
    cf->addServerName("Webserv");
    cf->setMainServerName();
    cf->addLimitBodySize("1000");
    Location loc;
    loc.addUrl("/", "");
    loc.setAutoIndex("on");
    loc.setMethod("POST", "on");
    loc.setMethod("DELETE", "on");
    loc.setMethod("GET", "on");
    loc.setIndexFile("index.html");
    loc.fixUrl("/html");
    loc.fixIndexFile();
    cf->addLocation(loc);
    Location test;
    test.addUrl("/coucou/test/test2/", "");
    test.setAutoIndex("on");
    test.setMethod("POST", "on");
    test.setMethod("DELETE", "on");
    test.setMethod("GET", "on");
    test.setIndexFile("index.html");
    test.fixUrl("/html");
    test.fixIndexFile();
    cf->addLocation(test);
    Location loc2;
    loc2.addUrl("/coucou/test2/", "");
    loc2.setAutoIndex("on");
    loc2.setMethod("POST", "on");
    loc2.setMethod("DELETE", "on");
    loc2.setMethod("GET", "on");
    loc2.setIndexFile("index.html");
    loc2.fixUrl("/html");
    loc2.fixIndexFile();
    cf->addLocation(loc2);
    cf->setRootToErrorPages();
    std::cout << *cf << std::endl;
    mapConfs map;
    // map[cf->getServerNames()] = cf;
    // map.insert(std::make_pair(cf->getServerNames()[0], cf));
    std::cout << RED << "serverName = " << cf->getMainServerName() << RESET
              << std::endl;
    map.insert(std::make_pair(cf->getMainServerName(), cf));
    std::cout << BLUE << "request: \n" << http_request << RESET << std::endl;
    Client request(5, map, cf);
    size_t pos = http_request.find_first_of('\r', 0);
    if (pos == http_request.npos)
      std::cout << RED << "no \\r" << RESET << std::endl;
    else
      std::cout << GREEN << "found \\r" << RESET << std::endl;
    std::string empty = "";
    std::vector<char> buf(&http_request[0], &http_request[http_request.size()]);

    request.addBuffer(buf);
    int a = 0;
    if (a == 10)
      std::cout << RED << "a == 10" << std::endl;
    request.print();
    std::vector<char> response;
    std::vector<char> final;
    while (request.sendResponse(response) != 0) {
      final.insert(final.end(), &response[0], &response[response.size()]);
    }
    final.insert(final.end(), &response[0], &response[response.size()]);
    // final += response;
    // std::cout << GREEN << "response: \n" << final << RESET << std::endl;
    std::cout << "FileSize: " << final.size() << std::endl;

    // while (request.isTimedOut() == false)
    //   sleep(2);
    //
    delete cf;
  } catch (std::exception &e) {
    std::cout << "Caught error: " << e.what() << std::endl;
  }
}
