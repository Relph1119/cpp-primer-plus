//
// Created by HRF on 2022/2/7.
//
#include <iostream>
#include <string>

using namespace std;

void uppercase(string &s);

int main() {
    string str;

    cout << "Enter a string (q to quit):";
    getline(cin, str);
    while (str != "q") {
        uppercase(str);
        cout << str << endl;
        cout << "Next string (q to quit):";
        getline(cin, str);
    }
    cout << "Bye." << endl;

    return 0;
}

void uppercase(string &s) {
    for (char &i : s) {
        i = toupper(i);
    }
}