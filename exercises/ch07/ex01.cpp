//
// Created by HRF on 2022/2/5.
//
#include <iostream>

using namespace std;

double calc_harmonic_mean(double x, double y);

int main() {
    double num1, num2;
    cout << "Please input the two number(0 to quit):";
    cin >> num1 >> num2;

    while (num1 != 0 && num2 != 0) {
        cout << "The harmonic mean of " << num1 << " and " << num2 << " is ";
        cout << calc_harmonic_mean(num1, num2) << endl;

        cout << "Please input next two number(0 to quit):";
        cin >> num1 >> num2;
    }
    return 0;
}

double calc_harmonic_mean(double x, double y) {
    return 2.0 * x * y / (x + y);
}