#pragma once
#include "Vector.h"
#include <vector>

class Array {
    std::vector<Vector> data;
    int size;

public:
    Array(int);
    ~Array();

    Vector& operator[](int index);
    int operator()() const;

    Array operator+(int n);
    Array operator-(int n);
};
