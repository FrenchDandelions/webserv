#ifndef SERVER_CONF_HPP
# define SERVER_CONF_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <limits>
#include <arpa/inet.h>
#include "Location.hpp"

typedef std::vector<std::string> vec_string;
typedef std::multimap<int, std::string> map_err_pages;
typedef std::vector<Location> vec_location;

class ServerConf
{
    private:
        vec_string server_names;
        int port;
        uint32_t host;
        uint32_t socket;
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
        ServerConf& operator= (const ServerConf &rhs);
        ~ServerConf();
        
        /* booleans */
        bool nameExist(const std::string &name);

        /* getters */
        vec_string getServerNames();        
        uint32_t getSocket(void);
        std::string getIndexErrorPage(int errorCode);
        int getPort(void) const;
        uint32_t getHost(void) const;
        std::string getMainServerName(void) const;
        map_err_pages getErrPages(void) const;
        uint64_t getLimitBodySize(void) const;
        vec_location getLocations(void) const;
        Location getPreciseLocation(const std::string &url) const;
        size_t getRank(void) const;
        std::string getRoot(void) const;

        /* setters */
        void addErrorPage(const std::string &url, std::vector<int> err);
        void addPortOrHost(const std::string &str);
        void addPort(const std::string &str);
        void addHost(const std::string &str);
        void addServerName(const std::string &name);
        void addLimitBodySize(const std::string &limit);
        void addLocation(const Location &loc);
        void setMainServerName(void);
        void setRank(size_t rank);
        void addRoot(const std::string &dir);
};

typedef std::vector<std::pair<vec_string, ServerConf> > map_confs;
vec_string split(const std::string &str, const std::string &charset);
vec_string tokenizer(std::string &str, const std::string &charset, const std::string &tokens);

//  std::numeric_limits<uint32_t>::max()

#endif
