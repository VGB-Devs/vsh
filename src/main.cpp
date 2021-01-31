#include <iostream>
#include <filesystem>

#include "./include/shell/Shell.hpp"
#include "./config.hpp"

int main() {
    Shell vsh;
    std::string user = vsh.env.get("USER");
    std::string wd = vsh.env.get("PWD");
    while(!0) {
	std::cout << vshTerminalPrefix;
	auto input = vsh.input.split(vsh.input.get(), ' ');
	if(!input.size()) {
	    std::cout << "";
	} else {
	    std::vector<std::string> paths = vsh.input.split(static_cast<std::string>(vsh.env.get("PATH")), ':');
	    for(auto x : paths) {
		std::filesystem::path f{x+"/"+input[0]};
		if(std::filesystem::exists(f)) {
		    std::string cmd = x+"/"+input[0];
		    for(int i = 1; i < input.size(); i++) {
			cmd+=" " + input[i];
		    }
		    system(cmd.c_str());
		};
	    }
	}
    }
}
