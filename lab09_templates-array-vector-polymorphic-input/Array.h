#ifndef ARRAY_H
#define ARRAY_H

#include <vector>
#include <iostream>
#include "Error.h"

template<typename T>
class Array {
private:
    std::vector<T> data;

public:
    explicit Array(int n = 0);
    Array(const Array<T>& other) = default;
    Array<T>& operator=(const Array<T>& other) = default;
    ~Array() = default;

    T& operator[](int index);
    int operator()() const;

    Array<T> operator+(int n);
    Array<T> operator-(int n);

    void fillFromInput();
};

template<typename T>
Array<T>::Array(int n) {
    if (n < 0) throw error("Array size cannot be negative");
    data.resize(n);
}

template<typename T>
void Array<T>::fillFromInput() {
    for (int i = 0; i < data.size(); ++i) {
        std::cout << "Element " << i + 1 << ":\n";
        data[i].input();
    }
}

template<typename T>
T& Array<T>::operator[](int index) {
    if (index < 0 || index >= data.size())
        throw error("Index out of bounds");
    return data[index];
}

template<typename T>
int Array<T>::operator()() const {
    return static_cast<int>(data.size());
}

template<typename T>
Array<T> Array<T>::operator+(int n) {
    if (n < 0) throw error("Cannot add negative number of elements");

    Array<T> result = *this;
    result.data.reserve(result.data.size() + n);

    T val;
    for (int i = 0; i < n; ++i) {
        std::cout << "New element " << result.data.size() + 1 << ":\n";
        val.input();
        result.data.push_back(val);
    }

    return result;
}

template<typename T>
Array<T> Array<T>::operator-(int n) {
    if (n < 0) throw error("Cannot remove negative number of elements");
    if (n > data.size()) throw error("Too many elements to remove");

    Array<T> result = *this;
    result.data.resize(result.data.size() - n);
    return result;
}

#endif // ARRAY_H

