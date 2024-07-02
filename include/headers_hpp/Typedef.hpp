#ifndef TYPEDEF_HPP
# define TYPEDEF_HPP

#include <map>
#include <vector>
#include <iostream>

class SubServ;
class ServerConf;
class Location;

typedef std::map<int, SubServ> mapSubServs; /* key = port */
typedef std::map<std::string, ServerConf&> mapConfs;
typedef std::vector<std::string> vec_string;
typedef std::multimap<int, std::string> map_err_pages;
typedef std::vector<Location> vec_location;
typedef std::vector<std::pair<vec_string, ServerConf> > vec_confs;


#endif
