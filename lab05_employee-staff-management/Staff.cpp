#include "Staff.h"
#include <iostream>

Staff::Staff(int size_) {
	size = size_;
	workers = new Employee[size];

	for (int i = 0; i < size; i++) {
		cout << "Enter worker #" << i + 1 << endl;
		cin >> workers[i];
		std::cout << endl;
	}
}

Staff::~Staff(){
	delete[] workers;
}

Employee& Staff::operator[] (int i) {
	if (i < 0 || i >= size) {
		std::cerr << "Incorrect index\n";
		exit(EXIT_FAILURE);
	}
	return workers[i];
}

void Staff::operator() (int i, float pct) {
	workers[i].increaseSalary(pct);
}

void Staff::displayInfo() {
	if (size == 0)
		cout << "Empty\n";
	else
		for (int i = 0; i < size; i++)
			cout << workers[i];
}

