#ifndef WEBSERV_HPP
#define WEBSERV_HPP

#include "Config.hpp"
#include "Error.hpp"
#include <fstream>
#include <sstream>
#include <fcntl.h>
#include <unistd.h>
#include "SubServ.hpp"
#include "ServerConf.hpp"
#include "Typedef.hpp"
#include "Utils.hpp"


class Webserv
{
    private:
		mapSubServs	_subServs;
        vec_string env;
        char **env_char;
        // Config conf;
        vec_confs confs;
        Webserv();
        void parseConfig(const std::string &conf);
        void parse(vec_string split); 

    public:
        Webserv(const char* s);
        Webserv(const Webserv& rhs);
        Webserv& operator=(const Webserv &rhs);
        ~Webserv();
        void addEnv(char **env);
        char ** getEnv(void);
};

#endif
