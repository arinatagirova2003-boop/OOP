#include "Pair.h"
#include "Rational.h"
#include <iostream>

using namespace std;

Pair f1(Pair& c)
{
	c.setFirst(10);
	return c;
}


int main() {

	Pair couple1;
	cout << "Enter first pair: " << endl;
	cin >> couple1;

	cout << couple1 << endl;

	cout << "Some functions: " << endl;
	cout << "1) isEqual - " << couple1.isEqual() << endl;
	cout << "2) multiplyField - " << couple1.multiplyField() << endl;

	Pair couple2;
	cout << "Enter second pair: " << endl;
	cin >> couple2;

	cout << couple2 << endl;

	cout << "Some operators: " << endl;
	cout << "1) operator - - " << couple1 - couple2 << endl;

	Rational couple3;
	cout << "Enter third pair: " << endl;
	cin >> couple3;

	Rational couple4;
	cout << "Enter fourth pair: " << endl;
	cin >> couple4;

	cout << couple3 << endl;
	cout << couple4 << endl;

	cout << "Some operators: " << endl;
	cout << "1) operator - - " << couple3 - couple4 << endl;
	cout << "2) operator + - " << couple3 + couple4 << endl;
	cout << "3) operator / - " << couple3 / couple4 << endl;
	cout << "4) LSP - " << f1(couple3) << endl;
}