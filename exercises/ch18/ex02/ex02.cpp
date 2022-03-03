//
// Created by HRF on 2022/3/3.
//
#include <iostream>
#include "cpmv.h"

using namespace std;

int main() {
    Cpmv cp1("Hello ", "This is ");
    cout << endl;
    Cpmv cp2("World!", "Voice of China.");
    cout << endl;
    Cpmv cp3 = cp2;
    cout << endl;
    cp2 = cp1;
    cout << endl;
    cp1 = cp2 + cp3;
    cout << endl;
    Cpmv cp4 (cp1 + cp2);

    return 0;
}