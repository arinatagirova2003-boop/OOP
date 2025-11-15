#include "Time.h"
#include "Logger.h"
#include <iomanip>
#include <iostream>

using namespace std;

int Time::amount = 0;

Time::Time() : name("Default"), hour(0), min(0), sec(0) { amount++; }
Time::Time(string n, int h, int m, int s) : name(n), hour(h), min(m), sec(s) {
	normalValue();
	amount++;
}

void Time::normalValue()
{
	if (sec >= 60) {
		min += sec / 60;
		sec = sec % 60;
	}
	else if (sec < 0) {
		int borrow = (-sec + 59) / 60;
		min -= borrow;
		sec += borrow * 60;
	}

	if (min >= 60) {
		hour += min / 60;
		min = min % 60;
	}
	else if (min < 0) {
		int borrow = (-min + 59) / 60;
		hour -= borrow;
		min += borrow * 60;
	}

	if (hour > 24) {
		hour = hour % 24;
	}
	else if (hour < 0) {
		hour = (hour % 24 + 24) % 24;
	}
}

int Time::getSec() { return sec; }
int Time::getMin() { return min; }
int Time::getHour() { return hour; }
int Time::getAmount() { return amount; }
string Time::getName() { return name;}

void Time::setSec(int s) {

	if (s >= 0 && s < 60)
		sec = s;
	else
		cerr << "Incorrect value!" << std::endl;
}

void Time::setMin(int m) {

	if (m >= 0 && m < 60)
		min = m;
	else
		cerr << "Incorrect value!" << std::endl;
}

void Time::setHour(int h) {

	if (h >= 0 && h < 60)
		hour = h;
	else
		cerr << "Incorrect value!" << std::endl;
}

void Time::addSec(int s) {
	sec += s;
	normalValue();
}

void Time::subtractSec(int s) {
	sec -= s;
	normalValue();
}

void Time::displayTime() {
	cout << hour << " : " << min << " : " << sec;
	cout << endl;
}

int Time::toSeconds() {
	return hour * 3600 + min * 60 + sec;
}
