#ifndef VECTOR_H
#define VECTOR_H

#include <iostream>

class Vector {
private:
    int x, y, z;

public:
    Vector(int X = 0, int Y = 0, int Z = 0);
    ~Vector();

    int getX();
    int getY();
    int getZ();

    friend std::ostream& operator<<(std::ostream& out, const Vector& e);
    friend std::istream& operator>>(std::istream& input, Vector& e);
};

#endif
