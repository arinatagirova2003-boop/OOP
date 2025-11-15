#include <iostream>
#include "Time.h"
#include "Logger.h"

int main()
{
	Logger* s = Logger::getInstance();

	Time t1("Time_1", 20, 5, 37);
	s->addRecord(t1);
	Time t2("Time_2", 18, 10, 41);
	s->addRecord(t2);
	Time t3("Time_3", 3, 40, 27);
	s->addRecord(t3);

	s->saveLog();
	return 0;
}
