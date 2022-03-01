//
// Created by HRF on 2022/3/1.
//
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool palindromic(string &s);

int main() {
    string str;

    cout << "Please input the string:";
    while (getline(cin, str) && !str.empty()) {
        cout << "The string is " << str << ", ";
        string z = palindromic(str) ? "is" : "isn't";
        cout << "It " << z << " a palindromic." << endl;
        cout << "Please input next string:";
    }

    cout << "Bye." << endl;
    return 0;
}

bool palindromic(string &s) {
    string temp = s;
    reverse(temp.begin(), temp.end());
    return s == temp;
}