program: src/main.cpp
	g++ -o vsh -std=c++20 \
	    src/main.cpp \
	    src/shell/Shell.cpp \
	    src/shell/ShellInput.cpp \
	    src/shell/ShellEnvironment.cpp \
