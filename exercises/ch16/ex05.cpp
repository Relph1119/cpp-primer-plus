//
// Created by HRF on 2022/3/1.
//
#include <iostream>
#include <list>

using namespace std;

template<class T>
int reduce(T ar[], int n);

template<class T>
void show_arr(const T ar[], int n);

int main() {
    long arr1[] = {2500, 3500, 6500, 90000, 3500, 15000, 2500, 12000};
    cout << "Original Array: ";
    int size = sizeof(arr1) / sizeof(long);
    show_arr(arr1, size);

    int resize = reduce(arr1, size);
    cout << "\nReduced Array: ";
    show_arr(arr1, resize);
    cout << endl;

    string arr2[] = {"it", "aboard", "it", "zone", "quit", "aa"};
    cout << "\nOriginal Array: ";
    size = sizeof(arr2) / sizeof(string);
    show_arr(arr2, size);

    resize = reduce(arr2, size);
    cout << "\nReduced Array: ";
    show_arr(arr2, resize);

    return 0;
}

template<class T>
int reduce(T ar[], int n) {
    list<T> ls;
    ls.insert(ls.end(), ar, ar + n);
    ls.sort();
    ls.unique();

    auto pd = ls.begin();
    for (int i = 0; i < ls.size(); i++, pd++) {
        ar[i] = *pd;
    }
    return ls.size();
}

template<class T>
void show_arr(const T ar[], int n) {
    for (int i = 0; i < n; i++) {
        cout << ar[i] << " ";
    }
}