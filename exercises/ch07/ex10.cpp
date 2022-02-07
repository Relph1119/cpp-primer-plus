//
// Created by HRF on 2022/2/5.
//
#include <iostream>

using namespace std;

double add(double x, double y);
double mul(double x, double y);
double calculate(double x, double y, double (*pf)(double x1, double x2));

int main() {
    double num1, num2;

    cout << "Please input tow number:";
    while (cin >> num1 >> num2 && num1 != 0 && num2 != 0) {
        double q = calculate(num1, num2, add);
        cout << "call function add: " << num1 << " + " << num2 << " = " << q << endl;
        double m = calculate(num1, num2, mul);
        cout << "call function mul: " << num1 << " * " << num2 << " = " << m << endl;

        cout << "Please input tow number(0 to quit):";
    }

    cout << "Bye!" << endl;
    return 0;
}

double add(double x, double y) {
    return x + y;
}

double mul(double x, double y) {
    return x * y;
}

double calculate(double x, double y, double (*pf)(double x1, double x2)) {
    return pf(x, y);
}