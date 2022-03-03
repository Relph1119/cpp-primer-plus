//
// Created by HRF on 2022/3/3.
//
#include <iostream>

using namespace std;

long double sum_value() { return 0; };

template<typename T, typename ...Args>
long double sum_value(T value, Args... args);

int main() {
    cout << sum_value(12, 23, 34, 45, 56) << endl;
    cout << sum_value('x', 'y', 'z', 11, 22, 33) << endl;
    cout << sum_value(0.2, 1e3, 45, 'M', '\t') << endl;
    return 0;
}

template<typename T, typename ...Args>
long double sum_value(T value, Args... args) {
    long double sum = (long double) value + (long double) sum_value(args...);
    return sum;
}