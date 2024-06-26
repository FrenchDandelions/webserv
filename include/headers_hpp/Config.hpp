#ifndef CONFIG_HPP
# define CONFIG_HPP

#include <vector>
#include <iostream>
#include "ServerConf.hpp"

class Config
{
    private:
        map_confs confs;

    public:
        Config();
        Config(const Config &rhs);
        Config& operator=(const Config &rhs);
        ~Config();
        void parse(vec_string split); 
        map_confs getMapConfs(void);

};

ServerConf parser(const vec_string &split, size_t &i, const size_t &size);
void ParserLocation(const vec_string &split, size_t &i,const size_t &size, ServerConf &cf);
void addErrorPagesNumber(std::vector<int> &vec, const vec_string &split, size_t &i);
void printConfig(const map_confs &conf);

#endif
