#include <iostream>
#include "./include/shell/Shell.hpp"
int main() {
    Shell vsh;
    std::string user = vsh.env.get("USER");
    std::string wd = vsh.env.get("PWD");
    while(!0) {
	std::cout << "\033[1;32m" << user << " " << "\033[1;34m" << wd << "\033[0m" << " -> ";
	auto input = vsh.input.split(vsh.input.get(), ' ');
	std::vector<std::string> paths = vsh.input.split(static_cast<std::string>(vsh.env.get("PATH")), ':');
	//path variable paths
    }
}
