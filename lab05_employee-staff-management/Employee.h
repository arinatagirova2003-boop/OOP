#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>

using namespace std;

class Employee {
private:
	string name;
	string post;
	int age;
	int experience;
	float salary;

public:
	Employee();
	Employee(string, string, int, int, float);
	~Employee();

	int getExp();
	float getSalary();

	friend ostream& operator<< (ostream& out, const Employee& e);
	friend istream& operator>> (istream& input, Employee& e);

	void increaseSalary(float);
};
#endif
