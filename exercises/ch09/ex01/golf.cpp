//
// Created by HRF on 2022/2/7.
//
#include <iostream>
#include <cstring>
#include "golf.h"

using namespace std;

void setgolf(golf &g, const char *name, int hc) {
    strcpy(g.fullname, name);
    g.handicap = hc;
}

int setgolf(golf &g) {
    char name[Len];
    int hc;

    cout << "Please input the name:";
    cin.getline(name, Len);

    if (name[0] == '\0') {
        return 0;
    } else {
        cout << "Please input the handicap:";
        while (!(cin >> hc)) {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "Please input the golf's handicap:";
        }
        setgolf(g, name, hc);
        return 1;
    }
}

void handicap(golf &g, int hc) {
    g.handicap = hc;
}

void showgolf(const golf &g) {
    cout << "Name: " << g.fullname << ", handicap is " << g.handicap << endl;
}
