#include <iostream>
#include "Employee.h"
#include "Staff.h"

using namespace std;

int main() {

	int size;

	do {
		cout << "Enter a size of staff: ";
		cin >> size;
	} while (size <= 0);

	Staff group(size);

	int num;
	float ptc;

	cout << "Choose worker you want to increase a salary. Enter number: ";
	cin >> num;
	cout << "Enter the percentage of salary increase: ";
	cin >> ptc;

	cout << "\nUpdated worker info:\n";
	group(num, ptc);

	cout << group[num];

	return 0;
}