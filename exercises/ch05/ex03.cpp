//
// Created by HRF on 2022/2/2.
//
#include "iostream"

using namespace std;

int main() {
    double number, sum;
    sum = 0;

    cout << "Please input a number:";
    while (cin >> number && number != 0) {
        sum += number;
        cout << "Please input next number:";
    }

    cout << "bye." << endl;
    cout << "The sum is " << sum << endl;
    return 0;
}
