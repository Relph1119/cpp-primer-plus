//
// Created by HRF on 2022/3/1.
//
#include <iostream>
#include <list>

using namespace std;

int reduce(long ar[], int n);

void show_arr(const long ar[], int n);

const int LEN = 8;

int main() {
    long arr[LEN] = {2500, 3500, 6500, 90000, 3500, 15000, 2500, 12000};
    cout << "Original Array: ";
    show_arr(arr, LEN);

    int size = reduce(arr, LEN);
    cout << "\nReduced Array: ";
    show_arr(arr, size);
    return 0;
}

int reduce(long ar[], int n) {
    list<long> ls;
    ls.insert(ls.end(), ar, ar + n);
    ls.sort();
    ls.unique();

    auto pd = ls.begin();
    for (int i = 0; i < ls.size(); i++, pd++) {
        ar[i] = *pd;
    }
    return ls.size();
}

void show_arr(const long ar[], int n) {
    for (int i = 0; i < n; i++) {
        cout << ar[i] << " ";
    }
}