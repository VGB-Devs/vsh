#include <string>
#include <vector>
#pragma once
class Command {
    public:
	Command(std::string name, std::string description, std::string usage);
	std::string name;
	std::string description;
	std::string usage;
	virtual int run(std::vector<std::string> args) {
	    return 0;
	};
};
