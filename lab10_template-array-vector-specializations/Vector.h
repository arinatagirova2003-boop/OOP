#include <iostream>
#include "Error.h"

template<typename T>
class Vector {
private:
    T x, y, z;

public:
    Vector(T X = T(), T Y = T(), T Z = T());
    ~Vector();

    T getX();
    T getY();
    T getZ();

    template<typename U>
    friend std::ostream& operator<<(std::ostream&, const Vector<U>&);
    template<typename U>
    friend std::istream& operator>>(std::istream&, Vector<U>&);
};

template<typename T>
Vector<T>::Vector(T X, T Y, T Z) : x(X), y(Y), z(Z) {}

template<typename T>
Vector<T>::~Vector() {}

template<typename T>
T Vector<T>::getX() { return x; }

template<typename T>
T Vector<T>::getY() { return y; }

template<typename T>
T Vector<T>::getZ() { return z; }

template<typename T>
std::ostream& operator<<(std::ostream& out, const Vector<T>& e) {
    out << "(" << e.x << ", " << e.y << ", " << e.z << ")";
    return out;
}

template<typename T>
std::istream& operator>>(std::istream& input, Vector<T>& e) {
    std::cout << "Enter x, y, z: ";
    input >> e.x >> e.y >> e.z;
    return input;
}

//Повна спеціалізація <string>

template<>
class Vector<std::string> {
private:
    std::string x, y, z;

public:
    Vector(std::string X = "", std::string Y = "", std::string Z = "") : x(X), y(Y), z(Z) {}
    ~Vector() {}

    std::string getX() { return x; }
    std::string getY() { return y; }
    std::string getZ() { return z; }

    friend std::ostream& operator<<(std::ostream& out, const Vector<std::string>& e);
    friend std::istream& operator>>(std::istream& input, Vector<std::string>& e);
};

std::ostream& operator<<(std::ostream& out, const Vector<std::string>& e) {
    out << "{ \"x\": \"" << e.x << "\", \"y\": \"" << e.y << "\", \"z\": \"" << e.z << "\" }";
    return out;
}

std::istream& operator>>(std::istream& input, Vector<std::string>& e) {
    std::cout << "Enter three strings (x y z): ";
    input >> e.x >> e.y >> e.z;
    return input;
}

//Повна спеціалізація <bool>

template<>
class Vector<bool> {
private:
    bool x, y, z;

public:
    Vector(bool X = false, bool Y = false, bool Z = false) : x(X), y(Y), z(Z) {}
    ~Vector() {}

    bool getX() { return x; }
    bool getY() { return y; }
    bool getZ() { return z; }

    friend std::ostream& operator<<(std::ostream& out, const Vector<bool>& e);
    friend std::istream& operator>>(std::istream& input, Vector<bool>& e);
};


std::ostream& operator<<(std::ostream& out, const Vector<bool>& e) {
    out << "[ " << e.x << ", " << e.y << ", " << e.z << " ]";
    return out;
}

std::istream& operator>>(std::istream& input, Vector<bool>& e) {
    std::cout << "Enter three boolean values (true/false): ";
    input >> std::boolalpha >> e.x >> e.y >> e.z;
    return input;
}

//std::istream& operator>>(std::istream& input, Vector<bool>& e) {
//    std::cout << "Enter three boolean values (true/false): ";
//
//    std::string sx, sy, sz;
//    input >> sx >> sy >> sz;
//
//    auto to_bool = [](const std::string& s) -> bool {
//        if (s == "true") return true;
//        if (s == "false") return false;
//        throw GeneralError("Invalid boolean value: " + s + ". Expected 'true' or 'false'.");
//    };
//
//    e.x = to_bool(sx);
//    e.y = to_bool(sy);
//    e.z = to_bool(sz);
//
//    return input;
//}
