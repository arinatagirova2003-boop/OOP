#include "Array.h"
#include <iostream>

Array::Array() {}

Array::Array(int size_) {
	size = size_;
	vector = new Array[size];

	for (int i = 0; i < size; i++) {
		std::cout << "Enter worker #" << i + 1 << std::endl;
		std::cin >> vector[i];
		std::cout << std::endl;
	}
}

Array::~Array() {
	delete[] vector;
}

Employee& Array::operator[] (int i) {
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

