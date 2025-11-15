#include "Vector.h"
#include <iostream>

Vector::Vector(float X, float Y, float Z) : x(X), y(Y), z(Z) {}
Vector::~Vector() {}

int Vector::getX() { return x; }
int Vector::getY() { return y; }
int Vector::getZ() { return z; }

Vector& Vector::operator*=(const Vector& op1) {
    float oldX = x, oldY = y, oldZ = z;

    x = oldY * op1.z - oldZ * op1.y;
    y = oldZ * op1.x - oldX * op1.z;
    z = oldX * op1.y - oldY * op1.x;

    return *this;
}

Vector& Vector::operator=(const Vector& op1) {
    if (this != &op1) {
        x = op1.x;
        y = op1.y;
        z = op1.z;
    }
    return *this;
}

void Vector::displayVec() {
    std::cout << "{ " << x << " , " << y << " , " << z << " }" << std::endl;
}

Vector operator+(Vector op1, Vector op2) {
    return Vector(op1.getX() + op2.getX(),
        op1.getY() + op2.getY(),
        op1.getZ() + op2.getZ());
}

Vector operator++(Vector& op1) {
    op1.x++;
    op1.y++;
    op1.z++;
    return op1;
}

Vector operator++(Vector& op1, int) {
    Vector temp = op1;
    op1.x++;
    op1.y++;
    op1.z++;
    return temp;
}
