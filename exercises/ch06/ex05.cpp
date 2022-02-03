//
// Created by HRF on 2022/2/3.
//
#include "iostream"

using namespace std;

int main() {
    float tax, salary = 0.0;

    cout << "Please input your salary to calculate tax:";
    cin >> salary;

    while (salary > 0) {
        if (salary <= 5000) {
            tax = 0;
        } else if (salary <= 15000) {
            tax = (salary - 5000) * 0.1;
        } else if (salary <= 35000) {
            tax = 10000 * 0.1 + (salary - 15000) * 0.15;
        } else if (salary > 35000) {
            tax = 10000 * 0.1 + 20000 * 0.15 + (salary - 35000) * 0.2;
        }

        cout << "Your salary is " << salary << " tvarps." << endl;
        cout << "Your tax is " << tax << " tvarps." << endl;

        cout << "Please input your salary to calculate tax:";
        cin >> salary;
    }

    cout << "Bye!" << endl;
    return 0;
}