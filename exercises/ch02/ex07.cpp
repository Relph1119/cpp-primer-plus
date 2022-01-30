//
// Created by HRF on 2022/1/30.
//
#include "iostream"

using namespace std;

void print_time(int hours, int minutes);

int main() {
    int hours, minutes;

    cout << "Enter the number of hours:";
    cin >> hours;
    cout << "Enter the number of minutes:";
    cin >> minutes;

    print_time(hours, minutes);

    return 0;
}

void print_time(int hours, int minutes) {
    cout << "Time: " << hours << ":" << minutes << endl;
}