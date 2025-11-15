#pragma once
#include <fstream>
class Pair
{
protected:
	int firstNum;
	int secondNum;

public:
	Pair();
	Pair(int, int);

	Pair operator-(const Pair&);

	friend std::ostream& operator<< (std::ostream&, const Pair&);
	friend std::istream& operator>> (std::istream&, Pair&);

	int multiplyField();
	bool isEqual();
	//void displayPair();

	void setFirst(int);
	void setSecond(int);
};

