#include "Pair.h"
#include <iostream>
#include <fstream>

Pair::Pair() : firstNum(0), secondNum(0) {}

Pair::Pair(int a, int b){
	firstNum = a;
	secondNum = b;
}

Pair Pair::operator-(const Pair& couple) {
	Pair newPair(firstNum - couple.firstNum, secondNum - couple.secondNum);
	return newPair;
}

std::ostream& operator<< (std::ostream& out, const Pair& couple) {
	out << "(" << couple.firstNum << " ," << couple.secondNum << ")";
	return out;
}

std::istream& operator>> (std::istream& in, Pair& couple) {
	std::cout << "Enter first number: ";
	in >> couple.firstNum;
	std::cout << "Enter second number: ";
	in >> couple.secondNum;
	return in;
}

int Pair::multiplyField() {
	return firstNum * secondNum;
}

bool Pair::isEqual() {
	return firstNum == secondNum;
}
//void Pair::displayPair() {
//	std::cout << "(" << firstNum << " ," << secondNum << ")" << std::endl;
//}

void Pair::setFirst(int a) {
	if (a != firstNum)
		firstNum = a;
}

void Pair::setSecond(int b) {
	if (b != secondNum)
		secondNum = b;
}
