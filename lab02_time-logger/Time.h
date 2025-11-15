#ifndef TIME_H
#define TIME_H

#include <string>

class Time
{
private:
    static int amount;
    std::string name;
    int sec;
    int min;
    int hour;
    void normalValue();

public:
    Time();
    Time(std::string, int, int, int);
    int getSec();
    int getMin();
    int getHour();
    static int getAmount();
    std::string getName();
    void setSec(int);
    void setMin(int);
    void setHour(int);
    void displayTime();
    void addSec(int);
    void subtractSec(int);
    int toSeconds();
};

extern const std::string className;

#endif
