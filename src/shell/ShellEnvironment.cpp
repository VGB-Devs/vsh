#include <iostream>
#include "../include/shell/ShellEnvironment.hpp"
char* ShellEnvironment::get(const char* key) {
    return std::getenv(key);
}
