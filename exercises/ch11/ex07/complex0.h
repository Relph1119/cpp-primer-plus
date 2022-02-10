//
// Created by HRF on 2022/2/11.
//
#ifndef COMPLEX0_H
#define COMPLEX0_H

using namespace std;

class complex {
private:
    double real;
    double imaginary;
public:
    complex(double real=0.0, double imaginary=0.0);
    ~complex();

    complex operator+(const complex & c) const;
    complex operator-(const complex & c) const;
    complex operator*(const complex & c) const;
    complex operator~() const;

    friend complex operator*(double x, const complex & c);
    friend istream & operator>>(istream & is, complex & c);
    friend ostream & operator<<(ostream & os, const complex & c);
};

#endif //COMPLEX0_H
