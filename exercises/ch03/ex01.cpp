//
// Created by HRF on 2022/1/31.
//
#include <iostream>

using namespace std;

const int INCH_PRE_FOOT = 12;

int main() {
    int height;
    cout << "Please input your height in inches:_\b";
    cin >> height;
    cout << "Your height " << height << " feet is ";
    cout << height / INCH_PRE_FOOT << " inches and ";
    cout << height % INCH_PRE_FOOT << " feet." << endl;

    return 0;
}