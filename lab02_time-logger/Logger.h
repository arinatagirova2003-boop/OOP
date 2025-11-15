#ifndef LOGGER_H
#define LOGGER_H
#include <vector>
#include <string>
#include "Time.h"

class Logger
{
private:
	static Logger* instance;
	Logger() {}
	Logger(const Logger&);
	Logger& operator=(const Logger&);
	std::vector<std::string> log;

public:
	static Logger* getInstance();
	void addRecord(Time&);
	void saveLog();
};

#endif
