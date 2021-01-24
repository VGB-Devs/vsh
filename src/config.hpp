#pragma once

#include <iostream>

#include "./include/utils/Colours.hpp"
#include "./include/utils/configUtilities.hpp"

std::string vshTerminalPrefix = magenta + user + reset + "@" + cyan + hostname() + green + " " + pwd + red + " $ " + reset;

/*
    Colours:
    red, green, blue, cyan, yellow, magenta, reset -> All include bright apart from reset

    Enviroment Variables:
    pwd, host, user, home -> enviroment variables will show up as "unkown" if not set

*/
