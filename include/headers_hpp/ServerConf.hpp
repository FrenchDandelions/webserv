#ifndef SERVER_CONF_HPP
# define SERVER_CONF_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <limits>
#include <arpa/inet.h>

typedef std::vector<std::string> vec_string;
typedef std::map<int, std::string> map_err_pages;
typedef std::map<std::string, std::map<int, std::string> > location;

class ServerConf
{
    private:
        vec_string server_names;
        int port;
        uint32_t host;
        uint32_t socket;
        map_err_pages err_pages;
        std::string limit_body_size;
        location locate;
        std::string server_name;

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
        std::string limitBodySize(void);
        int getPort(void) const;
        uint32_t getHost(void) const;
        std::string getMainServerName(void) const;

        /* setters */
        // void addErrorPage(const std::string &url, std::vector<int> err);
        void addPortOrHost(const std::string &str);
        void addPort(const std::string &str);
        void addHost(const std::string &str);
        void addServerName(const std::string &name);
        void setMainServerName(void);
};

typedef std::map<std::string, ServerConf> map_confs;
vec_string split(const std::string &str, const std::string &charset);

//  std::numeric_limits<uint32_t>::max()

#endif
