#ifndef VECTOR_H
#define VECTOR_H

class Vector {
private:
    int x, y, z;

public:
    Vector(float X = 0, float Y = 0, float Z = 0);
    ~Vector();

    int getX();
    int getY();
    int getZ();

    Vector& operator*=(const Vector& op1);
    Vector& operator=(const Vector& op1);

    friend Vector operator++(Vector&);
    friend Vector operator++(Vector&, int);

    void displayVec();
};

Vector operator+(Vector op1, int N);
Vector operator++(Vector& op1);
Vector operator++(Vector& op1, int);

#endif
