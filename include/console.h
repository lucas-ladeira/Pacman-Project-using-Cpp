#ifndef CONSOLE_H
#define CONSOLE_H

#include <string>

class Console {
public:
	Console()=default;
	Console(std::string name);
	void writeLine(std::string line);
private:
	std::string m_name;
};

#endif