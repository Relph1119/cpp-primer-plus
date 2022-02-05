//
// Created by HRF on 2022/2/5.
//
#include "iostream"

using namespace std;

long long factorial(int n);

int main() {
    int n;

    cout << "Please input a number:";
    while (cin >> n && n > 0) {
        cout << n << "! = " << factorial(n) << endl;
        cout << "Please input next number(-1 to quit):";
    }

    cout << "Bye!" << endl;
    return 0;
}

long long factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}
