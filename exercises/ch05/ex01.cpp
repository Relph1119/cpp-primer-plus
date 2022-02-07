//
// Created by HRF on 2022/2/2.
//
#include <iostream>

using namespace std;

int main() {
    int min, max, sum;
    sum = 0;

    cout << "Please input the first number:";
    cin >> min;
    cout << "Please input the second number:";
    cin >> max;

    for (int i = min; i <= max; i++) {
        sum += i;
    }

    cout << "The sum of " << min << "~" << max << " is ";
    cout << sum << endl;

    return 0;
}
