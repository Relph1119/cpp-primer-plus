//
// Created by HRF on 2022/2/7.
//
#include <iostream>

using namespace std;

const int SIZE = 5;

template<typename T>
T max5(T st[]);

int main() {
    int arr_i[SIZE] = {1, 3, 2, 5, 4};
    double arr_d[SIZE] = {1.1, 2.4, 1.6, 5.8, 2.3};

    cout << "The max element of int array: " << max5(arr_i) << endl;
    cout << "The max element of double array: " << max5(arr_d) << endl;

    return 0;
}

template<typename T>
T max5(T st[]) {
    T max = st[0];
    for (int i = 0; i < SIZE; i++) {
        if (max < st[i])
            max = st[i];
    }
    return max;
}
