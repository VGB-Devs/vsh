#include <vector>
#include <iostream>
class ShellInput {
    public:
	std::string get();
	int parse(const std::string&);
	std::vector<std::string> split(const std::string&, char);
};
