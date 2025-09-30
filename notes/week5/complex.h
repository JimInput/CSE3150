#pragma once
#include <ostream>

class Complex {
    double real_, imag_;
    Complex add(const Complex& c2) const {
        const double r = real_ + c2.real_;
        const double i = imag_ + c2.imag_;
        return Complex(r, i);
    }
    void print(std::ostream& os) const;
public:
    Complex() : real_(0), imag_(0) {}; // Default
    Complex(double a, double b) : real_(a), imag_(b) {}; // Custom
    Complex(const Complex& c) : real_(c.real_), imag_(c.imag_) {}; // Copy
    Complex& operator=(const Complex& c) {
        real_ = c.real_;
        imag_ = c.imag_;
        return *this;
    }

    friend Complex operator+(const Complex& a, const Complex& b) {
        return a.add(b);
    }
    friend std::ostream& operator<<(std::ostream& os, const Complex& c) {
        c.print(os);
        return os;
    }
};
