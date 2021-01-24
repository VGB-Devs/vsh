#include "../include/shell/Command.hpp"
Command::Command(std::string name, std::string description, std::string usage) {
    this->name = name;
    this->description = description;
    this->usage = usage;
}
