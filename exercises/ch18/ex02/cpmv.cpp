//
// Created by HRF on 2022/3/3.
//
#include <iostream>
#include "cpmv.h"

using namespace std;

Cpmv::Cpmv() {
    pi = nullptr;
    cout << "Default Constructor" << endl;
    Display();
}

Cpmv::Cpmv(string q, string z) {
    pi = new Info;
    pi->qcode = q;
    pi->zcode = z;
    cout << "Constructor with args." << endl;
}

Cpmv::Cpmv(const Cpmv &cp) {
    pi = new Info;
    pi->qcode = cp.pi->qcode;
    pi->zcode = cp.pi->zcode;
    cout << "Consturctor Cpoy." << endl;
}

Cpmv::Cpmv(Cpmv &&mv) {
    cout << "Move Constructor." << endl;
    pi = mv.pi;
    mv.pi = nullptr;
}

Cpmv::~Cpmv() {
    delete pi;
    cout << "Destroy Constructor." << endl;
}

Cpmv &Cpmv::operator=(const Cpmv &cp) {
    if (this == &cp) {
        return *this;
    }
    delete pi;
    pi = new Info;
    pi->qcode = cp.pi->qcode;
    pi->zcode = cp.pi->zcode;
    cout << "Assignment Normal." << endl;
    return *this;
}

Cpmv &Cpmv::operator=(Cpmv &&mv) {
    if (this == &mv) {
        return *this;
    }
    delete pi;
    pi = mv.pi;
    mv.pi = nullptr;
    cout << "Assignment R-values." << endl;
    Display();
    return *this;
}

Cpmv Cpmv::operator+(const Cpmv &obj) const {
    cout << "operator + ()." << endl;
    return Cpmv((pi->qcode + obj.pi->qcode), (pi->zcode + obj.pi->zcode));
}

void Cpmv::Display() const {
    cout << "Display Info:" << endl;
    if (pi == nullptr) {
        cout << "pi is null." << endl;
    } else {
        cout << "address: " << pi << endl;
        cout << "qcode: " << pi->qcode << endl;
        cout << "zcode: " << pi->zcode << endl;
    }
}
