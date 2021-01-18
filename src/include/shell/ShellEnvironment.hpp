#include <iostream>
class ShellEnvironment {
    public:
	void set(const std::string& key, const std::string& value);
	char* get(const char* key);
};
