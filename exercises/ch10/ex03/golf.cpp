//
// Created by HRF on 2022/2/7.
//
#include <iostream>
#include <cstring>
#include "golf.h"

using namespace std;

golf::golf() {
    char name[Len] = {'\0'};
    int hc;

    cout << "Please input the name:";
    cin.getline(name, Len);

    if (name[0] != '\0') {
        cout << "Please input the handicap:";
        while (!(cin >> hc)) {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "Please input the golf's handicap:";
        }
        cin.get();
        *this = golf(name, hc);
    }
}

golf::golf(const char *name, int hc) {
    strcpy(fullname, name);
    handicap = hc;
}

void golf::setHandicap(int hc) {
    handicap = hc;
}

void golf::showgolf() const {
    if (strlen(this->fullname) > 0) {
        cout << "Name: " << fullname << ", handicap is " << handicap << endl;
    }
}

golf::~golf() = default;