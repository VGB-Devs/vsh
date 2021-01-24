#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include "./String.hpp"
#include <fstream>
std::string hostname() {
    std::string line;
    std::ifstream myfile ("/proc/sys/kernel/hostname");
    if (myfile.is_open())
    {
	getline(myfile,line);
	return line;
    }
    else return "null";

}

std::string host = hostname() != "null" ? hostname() : "unknown";

char* userChar = std::getenv("USER");
std::string user = std::string(userChar);

char* homeChar = std::getenv("HOME");
std::string home = std::string(homeChar);

char* pwdChar = std::getenv("PWD");
std::string pwd = ess(std::string(pwdChar), home);
