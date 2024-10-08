#ifndef ERROR_HPP
# define ERROR_HPP

#include <iostream>
#include <vector>
#include "Colors.hpp"

typedef std::vector<std::string> vec_string;

extern const char *childLog;
extern const char *parsingError;
extern const char *serverLog;
extern const char *error;
extern const char *childError;

template <typename F>
void writeInsideLog(const std::exception &e, F f)
{
    std::string message = e.what();
    f(message);
}

void errorParsing(const std::string &message);
void errorChild(const std::string &message);
void errorServer(const std::string &message);
void goToNextIndex(const vec_string &split, size_t &i);

#endif
