//
// Created by HRF on 2022/2/1.
//
#include <iostream>
#include <string>

using namespace std;

int main() {
    string first_name, last_name, name;

    cout << "Enter your first name:";
    getline(cin, first_name);
    cout << "Enter your last name:";
    getline(cin, last_name);

    name = first_name + ", " + last_name;

    cout << "Here's the information in a single string: " << name << endl;
    return 0;
}
