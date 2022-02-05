//
// Created by HRF on 2022/2/5.
//
#include "iostream"

using namespace std;

const int SIZE = 20;

int fill_array(double arr[], int size);
void show_array(const double arr[], int size);
void reverse_array(double arr[], int size);

int main() {
    double array[SIZE];

    int size = fill_array(array, SIZE);
    show_array(array, size);
    reverse_array(array, size);
    show_array(array, size);
    reverse_array(&array[1], size - 2);
    show_array(array, size);
    return 0;
}

int fill_array(double arr[], int size) {
    int i = 0;
    double value;

    cout << "Enter the number of array(q to quit):" << endl;

    while (i < size) {
        if (cin >> value) {
            arr[i++] = value;
        } else {
            return i;
        }
    }
    return i;
}

void show_array(const double arr[], int size) {
    cout << "The array's data: " << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << "\t";
    }
    cout << endl;
}

void reverse_array(double arr[], int size) {
    double temp;
    for (int i = 0; i < size / 2; i++) {
        temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
}
