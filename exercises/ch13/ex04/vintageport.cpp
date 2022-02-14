//
// Created by HRF on 2022/2/15.
//
#include "vintageport.h"
#include <iostream>
#include <cstring>

using namespace std;

Port::Port(const char *br, const char *st, int b) {
    brand = new char[strlen(br) + 1];
    strcpy(brand, br);
    strcpy(style, st);
    bottles = b;
}

Port::Port(const Port &p) {
    brand = new char[strlen(p.brand) + 1];
    strcpy(brand, p.brand);
    strcpy(style, p.style);
    bottles = p.bottles;
}

Port &Port::operator=(const Port &p) {
    if (this == &p) {
        return *this;
    }
    delete[] brand;
    brand = new char[strlen(p.brand) + 1];
    strcpy(brand, p.brand);
    strcpy(style, p.style);
    bottles = p.bottles;
    return *this;
}

Port &Port::operator+=(int b) {
    bottles += b;
    return *this;
}

Port &Port::operator-=(int b) {
    bottles -= b;
    return *this;
}

void Port::Show() const {
    cout << "Brand: " << brand << endl;
    cout << "Kind: " << style << endl;
    cout << "Bottles: " << bottles << endl;
}

ostream &operator<<(ostream &os, const Port &p) {
    os << p.brand << ", " << p.style << ", " << p.bottles;
    return os;
}

VintagePort::VintagePort() : Port() {
    nickname = new char[20];
    strcpy(nickname, "none");
    year = 0;
}

VintagePort::VintagePort(const char *br, int b, const char *nn, int y) : Port(br, "none", b) {
    nickname = new char[strlen(nn) + 1];
    strcpy(nickname, nn);
    year = y;
}

VintagePort::VintagePort(const VintagePort &vp) : Port(vp) {
    nickname = new char[strlen(vp.nickname) + 1];
    strcpy(nickname, vp.nickname);
    year = vp.year;
}

VintagePort &VintagePort::operator=(const VintagePort &vp) {
    if (this == &vp) {
        return *this;
    }
    Port::operator=(vp);
    delete[] nickname;
    nickname = new char[strlen(vp.nickname) + 1];
    strcpy(nickname, vp.nickname);
    year = vp.year;
    return *this;
}

void VintagePort::Show() const {
    Port::Show();
    cout << "NickName: " << nickname << endl;
    cout << "Year: " << year << endl;
}

ostream &operator<<(ostream &os, const VintagePort &vp) {
    os << (const Port &) vp;
    os << ", " << vp.nickname << ", " << vp.year << endl;
    return os;
}