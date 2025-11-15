#ifndef ERROR_H_INCLUDED
#define ERROR_H_INCLUDED

#include <string>
#include <exception>

class error : public std::exception {
private:
    std::string str;

public:
    explicit error(const std::string& s) : str(s) {}

    const char* what() const noexcept override {
        return str.c_str();
    }
};

#endif

