#include <iostream>
#include "./ShellEnvironment.hpp"
#include "./ShellInput.hpp"
#include <map>
#include "./Command.hpp"
class Shell {
    public:
	Shell();
	ShellInput input;
	ShellEnvironment env;
	std::map<std::string, Command> commands;
};
