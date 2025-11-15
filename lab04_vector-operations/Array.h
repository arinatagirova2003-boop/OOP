#pragma once
include "Vector.h"
class Array
{
private:
	Array* vector;
	int size;
public:
	Array(int);
	Array();
	~Array();

	Array& operator[] (int);
};

