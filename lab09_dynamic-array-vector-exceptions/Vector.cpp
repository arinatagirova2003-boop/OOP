#include "Vector.h"
#include <iostream>

Vector::Vector(int X, int Y, int Z) : x(X), y(Y), z(Z) {}
Vector::~Vector() {}

int Vector::getX() { return x; }
int Vector::getY() { return y; }
int Vector::getZ() { return z; }

std::ostream& operator<<(std::ostream& out, const Vector& e) {
    out << "(" << e.x << ", " << e.y << ", " << e.z << ")";
    return out;
}

std::istream& operator>>(std::istream& input, Vector& e) {
    std::cout << "Enter x, y, z: ";
    input >> e.x >> e.y >> e.z;
    return input;
}


