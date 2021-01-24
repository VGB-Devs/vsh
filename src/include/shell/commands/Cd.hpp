#include "../Command.hpp"
#pragma once
class Cd : public Command {
    public:
	Cd();
	int run(std::vector<std::string> args) override;
};
