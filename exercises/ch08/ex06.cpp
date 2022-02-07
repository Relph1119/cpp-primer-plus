//
// Created by HRF on 2022/2/7.
//
#include <iostream>
#include <cstring>

using namespace std;

template<typename T>
T maxn(T st[], int n);

template<>
char *maxn<char *>(char *st[], int n);

int main() {
    int arr_i[6] = {2, 4, 3, 9, 7, 5};
    double arr_d[4] = {3.3, 10.6, 7.3, 4.45};
    string str[] = {"Hello", "Hello world!"};

    cout << "The max element of int array: " << maxn(arr_i, 6) << endl;
    cout << "The max element of double array: " << maxn(arr_d, 4) << endl;
    cout << "The max element of string: " << maxn(str, 2) << endl;

    return 0;
}

template<typename T>
T maxn(T st[], int n) {
    T max = st[0];
    for (int i = 0; i < n; i++) {
        if (max < st[i]) {
            max = st[i];
        }
    }
    return max;
}

template<>
char *maxn<char *>(char *st[], int n) {
    int max = 0;
    for (int i = 0; i < n; i++) {
        if (strlen(st[max]) < strlen(st[i])) {
            max = i;
        }
    }
    return st[max];
}