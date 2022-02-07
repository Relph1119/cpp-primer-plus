//
// Created by HRF on 2022/2/5.
//
#include <iostream>

using namespace std;

const int SIZE = 10;

int input_score(int arr[], int size);
void display(const int arr[], int size);
double calc_average(const int arr[], int size);

int main() {
    int golf_score[SIZE];
    int count;
    count = input_score(golf_score, SIZE);
    display(golf_score, count);
    cout << "The average scores is " << calc_average(golf_score, count) << endl;

    return 0;
}

int input_score(int arr[], int size) {
    int i = 0;
    int count = 0;
    cout << "Please input the golf scores(-1 to quit)" << endl;
    while (i < size) {
        cout << "No." << (i + 1) << " golf score:";
        int value;
        cin >> value;
        cin.get();
        if (value < 0) {
            count = i;
            for (; i < size; i++) {
                arr[i] = 0;
            }
            break;
        } else {
            arr[i++] = value;
        }
    }
    return count;
}

void display(const int arr[], int size) {
    cout << "\nHere are " << size << " times golf scores:" << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << "\t";
    }
    cout << endl;
}

double calc_average(const int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return 1.0 * sum / size;
}