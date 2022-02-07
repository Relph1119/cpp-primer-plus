//
// Created by HRF on 2022/2/1.
//
#include <iostream>
#include <cstring>

using namespace std;

const int LEN = 20;

int main() {
    char first_name[LEN], last_name[LEN];
    char name[LEN * 2];

    cout << "Enter your first name:";
    cin.getline(first_name, LEN);
    cout << "Enter your last name:";
    cin.getline(last_name, LEN);

    strcpy(name, last_name);
    strcat(name, ", ");
    strcat(name, first_name);

    cout << "Here's the information in a single string: " << name << endl;
    return 0;
}