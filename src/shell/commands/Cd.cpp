#include "../../include/shell/commands/Cd.hpp"
#include <iostream>
Cd::Cd() : Command("cd", "change directory", "cd <directory") {
    std::cout << "OK" << std::endl;
}
int Cd::run(std::vector<std::string> args) {
    std::cout << "test" << std::endl;
    return 0;
}
