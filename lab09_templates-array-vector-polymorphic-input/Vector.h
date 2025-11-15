#ifndef VECTOR_H
#define VECTOR_H

#include <iostream>
#include <string>

template<typename T>
class Vector {
private:
    T x, y, z;

public:
    explicit Vector(T X = T(), T Y = T(), T Z = T());
    ~Vector() = default;

    T getX() const;
    T getY() const;
    T getZ() const;

    void input();
    void print(std::ostream& out) const;
};

template<typename T>
Vector<T>::Vector(T X, T Y, T Z) : x(X), y(Y), z(Z) {}

template<typename T>
T Vector<T>::getX() const { return x; }

template<typename T>
T Vector<T>::getY() const { return y; }

template<typename T>
T Vector<T>::getZ() const { return z; }

template<typename T>
void Vector<T>::input() {
    std::cout << "Enter x, y, z: ";
    std::cin >> x >> y >> z;
}

template<typename T>
void Vector<T>::print(std::ostream& out) const {
    out << "(" << x << ", " << y << ", " << z << ")";
}

template<typename T>
std::ostream& operator<<(std::ostream& out, const Vector<T>& v) {
    v.print(out);
    return out;
}

// === string ===

template<>
class Vector<std::string> {
private:
    std::string x, y, z;

public:
    Vector(std::string X = "", std::string Y = "", std::string Z = "");
    ~Vector() = default;

    std::string getX() const;
    std::string getY() const;
    std::string getZ() const;

    void input();
    void print(std::ostream& out) const;
};

Vector<std::string>::Vector(std::string X, std::string Y, std::string Z) : x(X), y(Y), z(Z) {}

std::string Vector<std::string>::getX() const { return x; }
std::string Vector<std::string>::getY() const { return y; }
std::string Vector<std::string>::getZ() const { return z; }

void Vector<std::string>::input() {
    std::cout << "Enter three strings (x y z): ";
    std::cin >> x >> y >> z;
}

void Vector<std::string>::print(std::ostream& out) const {
    out << "{ \"x\": \"" << x << "\", \"y\": \"" << y << "\", \"z\": \"" << z << "\" }";
}

// === bool ===

template<>
class Vector<bool> {
private:
    bool x, y, z;

public:
    Vector(bool X = false, bool Y = false, bool Z = false);
    ~Vector() = default;

    bool getX() const;
    bool getY() const;
    bool getZ() const;

    void input();
    void print(std::ostream& out) const;
};

Vector<bool>::Vector(bool X, bool Y, bool Z) : x(X), y(Y), z(Z) {}

bool Vector<bool>::getX() const { return x; }
bool Vector<bool>::getY() const { return y; }
bool Vector<bool>::getZ() const { return z; }

void Vector<bool>::input() {
    std::cout << "Enter three boolean values (true/false): ";
    std::cin >> std::boolalpha >> x >> y >> z;
}

void Vector<bool>::print(std::ostream& out) const {
    out << "[ " << x << ", " << y << ", " << z << " ]";
}

#endif // VECTOR_H
