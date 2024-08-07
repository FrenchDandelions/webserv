#ifndef SERVERCONF_HPP
#define SERVERCONF_HPP

#include "Location.hpp"
#include "Utils.hpp"

class ServerConf {
private:
  vec_string server_names;
  int port;
  uint32_t host;
  map_err_pages err_pages;
  uint64_t limit_body_size;
  vec_location _locations;
  std::string server_name;
  size_t rank;
  std::string root;

public:
  /* basic constructor/destructor */
  ServerConf();
  ServerConf(const ServerConf &rhs);
  ServerConf &operator=(const ServerConf &rhs);
  ~ServerConf();

  /* booleans */
  bool nameExist(const std::string &name);

        /* getters */
        vec_string& getServerNames();        
        std::string& getIndexErrorPage(int errorCode);
        const int& getPort(void) const;
        const uint32_t& getHost(void) const;
        const std::string& getMainServerName(void) const;
        const map_err_pages& getErrPages(void) const;
        const uint64_t& getLimitBodySize(void) const;
        vec_location& getLocations(void);
        Location& getPreciseLocation(const std::string &url) ;
        const size_t& getRank(void) const;
        const std::string& getRoot(void) const;

  /* setters */
  void addErrorPage(const std::string &url, std::vector<int> err);
  void addPortOrHost(const std::string &str);
  void addPort(const std::string &str);
  void addHost(const std::string &str);
  void addServerName(const std::string &name);
  void addLimitBodySize(const std::string &limit);
  void addLocation(Location &loc);
  void setMainServerName(void);
  void setRank(size_t rank);
  void addRoot(const std::string &dir);
  void setRootToErrorPages();
};

std::ostream &operator<<(std::ostream &out, const ServerConf &cf);
//  std::numeric_limits<uint32_t>::max()

#endif
