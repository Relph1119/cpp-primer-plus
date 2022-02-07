//
// Created by HRF on 2022/2/7.
//
#include <iostream>
#include <cstring>

using namespace std;

struct stringy {
    char *str;
    int ct;
};

void set(stringy &sty, char *st);
void show(const stringy &sty, int n = 0);
void show(const string &str, int n = 0);

int main() {
    stringy beany;
    char testing[] = "Reality isn't what it used to be.";

    set(beany, testing);
    show(beany);
    show(beany, 2);
    testing[0] = 'D';
    testing[1] = 'u';
    show(testing);
    show(testing, 3);
    show("Done!");

    return 0;
}

void show(const string &str, int n) {
    if (n == 0) {
        n++;
    }
    for (int i = 0; i < n; i++) {
        cout << str << endl;
    }
}

void show(const stringy &sty, int n) {
    if (n == 0) {
        n++;
    }
    for (int i = 0; i < n; i++) {
        cout << sty.str << endl;
    }
}

void set(stringy &sty, char *st) {
    sty.ct = strlen(st);
    sty.str = new char[sty.ct];
    strcpy(sty.str, st);
}