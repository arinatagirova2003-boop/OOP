#include <vector>
#include <iostream>
#include "Error.h"

template<typename T>
class Array {
    std::vector<T> data;
    int size;

public:
    Array(int);
    ~Array();

    T& operator[](int index);
    int operator()() const;

    Array<T> operator+(int n);
    Array<T> operator-(int n);
};

template<typename T>
Array<T>::Array(int n) {
    if (n < 0) throw SizeError("Array size cannot be negative");
    size = n;
    data.resize(n);
    std::cout << "Initial array:\n";
    for (int i = 0; i < size; ++i)
        std::cin >> data[i];
}

template<typename T>
Array<T>::~Array() {}

template<typename T>
T& Array<T>::operator[](int index) {
    if (index < 0 || index >= size)
        throw IndexError("Index out of bounds");
    return data[index];
}

template<typename T>
int Array<T>::operator()() const {
    return size;
}

template<typename T>
Array<T> Array<T>::operator+(int n) {
    if (n < 0) throw GeneralError("Cannot add negative number of elements");

    Array<T> result = *this;
    result.data.reserve(size + n);

    T val;
    for (int i = 0; i < n; ++i) {
        std::cin >> val;
        result.data.push_back(val);
    }

    result.size = result.data.size();
    return result;
}

template<typename T>
Array<T> Array<T>::operator-(int n) {
    if (n < 0) throw GeneralError("Cannot remove negative number of elements");
    if (n > static_cast<int>(data.size())) throw SizeError("Too many elements to remove");

    Array<T> result = *this;
    for (int i = 0; i < n; ++i)
        result.data.pop_back();

    result.size = result.data.size();
    return result;
}
