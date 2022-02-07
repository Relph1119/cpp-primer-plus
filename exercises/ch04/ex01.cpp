//
// Created by HRF on 2022/2/1.
//
#include <iostream>

using namespace std;

const int LEN = 20;

int main() {
    char first_name[LEN], last_name[LEN];
    char grade;
    int age;

    cout << "What is your first name?";
    cin.getline(first_name, LEN);
    cout << "What is your last name?";
    cin.getline(last_name, LEN);
    cout << "What letter grade do you deserve?";
    cin >> grade;
    cout << "What is your age?";
    cin >> age;

    cout << "Name:" << last_name << ", " << first_name << endl;
    cout << "Grade: " << char(grade + 1) << endl;
    cout << "Age: " << age << endl;

    return 0;
}
