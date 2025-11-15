#include "Array.h"
#include "Error.h"
#include <iostream>

Array::Array(int n) {
    if (n < 0) throw error("Size of array cannot be negative");
    size = n;
    data.resize(n);
    std::cout << "Initial array:\n";
    for (int i = 0; i < size; ++i)
        std::cin >> data[i];
}

Array::~Array() {}

Vector& Array::operator[](int index) {
    if (index < 0 || index >= size)
        throw error("Index out of bounds in Array");
    return data[index];
}

int Array::operator()() const {
    return size;
}

Array Array::operator+(int n) {
    if (n < 0) throw error("Cannot add negative number of elements");

    Array result = *this;
    result.data.reserve(size + n);

    Vector v1;
    for (int i = 0; i < n; ++i) {
        std::cin >> v1;
        result.data.push_back(v1);
    }

    result.size = result.data.size();
    return result;
}

Array Array::operator-(int n) {
    if (n < 0) throw error("Cannot remove negative number of elements");
    if (n > size) throw error("Cannot remove more elements than array size");

    Array result = *this;
    for (int i = 0; i < n; ++i)
        result.data.pop_back();

    result.size = result.data.size();
    return result;
}
