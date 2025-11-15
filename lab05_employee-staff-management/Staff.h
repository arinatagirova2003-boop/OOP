#ifndef STAFF_H
#define STAFF_H
#include "Employee.h"

class Staff {
private:
	Employee* workers;
	int size;

public:
	Staff(int);
	~Staff();

	Employee& operator[] (int);
	void operator() (int, float);

	void displayInfo();
};
#endif
