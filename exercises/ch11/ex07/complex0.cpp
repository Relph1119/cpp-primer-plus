//
// Created by HRF on 2022/2/11.
//
#include <iostream>
#include "complex0.h"

using namespace std;

complex::complex(double real_num, double imaginary_num) {
    real = real_num;
    imaginary = imaginary_num;
}

complex::~complex() = default;

complex complex::operator+(const complex &c) const {
    return {real + c.real, imaginary + c.imaginary};
}

complex complex::operator-(const complex &c) const {
    return {real - c.real, imaginary - c.imaginary};
}

complex complex::operator*(const complex &c) const {
    complex m;
    m.real = real * c.real - imaginary * c.imaginary;
    m.imaginary = real * c.imaginary + imaginary * c.real;
    return m;
}

complex operator*(double x, const complex &c) {
    return {x * c.real, x * c.imaginary};
}

complex complex::operator~() const {
    return {real, -imaginary};
}

istream &operator>>(istream &is, complex &c) {
    cout << "real:";
    if (!(is >> c.real)) {
        return is;
    }
    cout << "imaginary:";
    is >> c.imaginary;
    return is;
}

ostream &operator<<(ostream &os, const complex &c) {
    os << "(" << c.real << ", " << c.imaginary << "i)";
    return os;
}