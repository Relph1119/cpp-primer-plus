//
// Created by HRF on 2022/3/1.
//
#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

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
    string temp;

    for (char c : s) {
        if (isalpha(c)) {
            temp += tolower(c);
        }
    }

    string rev_temp = temp;
    reverse(rev_temp.begin(), rev_temp.end());
    return temp == rev_temp;
}