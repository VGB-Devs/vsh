program: src/main.cpp
	g++ -o vsh -std=c++2a \
	    src/main.cpp \
	    src/shell/Shell.cpp \
	    src/shell/ShellInput.cpp \
	    src/shell/ShellEnvironment.cpp \
		src/utils/String.cpp \
