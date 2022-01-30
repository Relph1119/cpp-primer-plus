//
// Created by HRF on 2022/1/30.
//
#include "iostream"

using namespace std;

void func1();

void func2();

int main() {
    func1();
    func1();
    func2();
    func2();

    return 0;
}

void func1() {
    cout << "Three blind mice" << endl;
}

void func2() {
    cout << "See how they run" << endl;
}