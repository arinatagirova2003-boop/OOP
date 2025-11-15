#include "Logger.h"
#include "Time.h"
#include "fstream"
#include <iomanip>

Logger* Logger::instance = nullptr;

Logger* Logger::getInstance()
{
	if (!instance)
		instance = new Logger();
	return instance;
}

void Logger::addRecord(Time& t) {

    time_t now = time(0);
    char buffer[26];
    ctime_s(buffer, sizeof(buffer), &now);
    std::string dt(buffer);
    dt.pop_back();

    std::string record = dt + "\n";
    record += "objectName: " + t.getName() + "\n";
    record += "Hour: " + std::to_string(t.getHour()) + "\n";
    record += "Minute: " + std::to_string(t.getMin()) + "\n";
    record += "Second: " + std::to_string(t.getSec()) + "\n";
    log.push_back(record);
}

void Logger::saveLog() {

    std::ofstream data;
    data.open("log.txt");
    if (data.is_open())
    {
        data << "ClassName:Time\n";
        data << "Number of entities: " << Time::getAmount() << "\n";
        for (const auto& entry : log) {
            data << entry << "\n";
        }
        data.close();
    }
}