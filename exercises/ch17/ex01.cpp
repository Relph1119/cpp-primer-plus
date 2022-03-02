//
// Created by HRF on 2022/3/2.
//
#include <iostream>

using namespace std;

int main() {
    int count = 0;
    char ch;
    cout << "Please input a phase:";
    while(cin.peek() != '$') {
        cin.get(ch);
        cout << ch;
        count++;
    }
    cout << "\nHere is " << count << " characters." << endl;

    return 0;
}