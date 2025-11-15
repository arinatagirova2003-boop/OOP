#include "Employee.h"
#include <iostream>

Employee::Employee() {
	name = "name";
	post = "post";
	age = 1;
	experience = 1;
	salary = 1;
}

Employee::Employee(string name_, string post_, int age_, int exp_, float salary_) :
	name(name_), post(post_), age(age_), experience(exp_), salary(salary_) {}

Employee::~Employee() {}

int Employee::getExp() { return experience; }

float Employee::getSalary() { return salary; }

void Employee::increaseSalary(float pct) {
	salary += salary * (pct/100);
}

ostream& operator<< (ostream& out, const Employee& e) {
	out << "Name: " << e.name << std::endl;
	out << "Post: " << e.post << std::endl;
	out << "Age: " << e.age << std::endl;
	out << "Experience: " << e.experience << std::endl;
	out << "Salary: " << e.salary << std::endl;
	out << std::endl;
	return out;
}

istream& operator>> (istream& in, Employee& e) {
	std::cout << "Enter name: ";
	in >> e.name;
	std::cout << "Enter post: ";
	in >> e.post;
	std::cout << "Enter age: ";
	in >> e.age;
	std::cout << "Enter experience: ";
	in >> e.experience;
	std::cout << "Enter salary: ";
	in >> e.salary;
	return in;
}