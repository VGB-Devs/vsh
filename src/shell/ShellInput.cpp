#include <iostream>
#include <sstream>
#include <iterator>
#include <string>
#include "../include/shell/ShellInput.hpp"
std::string ShellInput::get() {
    std::string x;
    std::getline(std::cin, x);
    return x;
}
std::vector<std::string> ShellInput::split(const std::string& input, char key) {
    std::vector<std::string> tmp;
    std::string x;
    std::istringstream iss(input);
    while(std::getline(iss, x, key)) {
	tmp.push_back(x);
    }
    return tmp;
}
