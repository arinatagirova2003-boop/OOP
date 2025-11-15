#include "Rational.h"

Rational::Rational():Pair(){}
Rational::Rational(int a1, int b1):Pair(a1, b1){}

Rational Rational::operator+(const Rational& couple) {
	Rational newNum(firstNum * couple.secondNum + secondNum * couple.firstNum, secondNum * couple.secondNum);
	return newNum;
}

Rational Rational::operator/(const Rational& couple) {
	Rational newNum(firstNum * couple.secondNum, secondNum * couple.firstNum);
	return newNum;
}

Rational Rational::operator-(const Rational& couple) {
	Rational newNum(firstNum * couple.secondNum - secondNum * couple.firstNum, secondNum * couple.secondNum);
	return newNum;
}