#include <iostream>
#include "./ShellEnvironment.hpp"
#include "./ShellInput.hpp"
class Shell {
    public:
	Shell();
	ShellInput input;
	ShellEnvironment env;

};
