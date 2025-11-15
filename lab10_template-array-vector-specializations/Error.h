#ifndef ERROR_H_INCLUDED
#define ERROR_H_INCLUDED

#include <string>
#include <exception>
#include <iostream>

class ErrorBase : public std::exception {
protected:
    std::string message;

public:
    explicit ErrorBase(std::string msg) : message(std::move(msg)) {}
    virtual const char* what() const noexcept override {
        return message.c_str();
    }

    virtual void log() const {
        std::cerr << "[Error]: " << what() << std::endl;
    }

    virtual ~ErrorBase() = default;
};

class GeneralError : public ErrorBase {
public:
    explicit GeneralError(const std::string& msg) : ErrorBase("GeneralError: " + msg) {}
    void log() const override {
        std::cerr << "[GeneralError]: " << what() << std::endl;
    }
};

class SizeError : public ErrorBase {
public:
    explicit SizeError(const std::string& msg) : ErrorBase("SizeError: " + msg) {}
    void log() const override {
        std::cerr << "[SizeError]: " << what() << std::endl;
    }
};

class IndexError : public ErrorBase {
public:
    explicit IndexError(const std::string& msg) : ErrorBase("IndexError: " + msg) {}
    void log() const override {
        std::cerr << "[IndexError]: " << what() << std::endl;
    }
};

#endif
