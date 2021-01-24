#include <iostream>
#include <cstdlib>

#include "./String.hpp"

char* hostChar = std::getenv("HOSTNAME");
std::string host = hostChar != nullptr ? std::string(hostChar) : "unknown";

char* userChar = std::getenv("USER");
std::string user = std::string(userChar);

char* homeChar = std::getenv("HOME");
std::string home = std::string(homeChar);

char* pwdChar = std::getenv("PWD");
std::string pwd = ess(std::string(pwdChar), home);