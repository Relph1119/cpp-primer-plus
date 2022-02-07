//
// Created by HRF on 2022/2/1.
//
#include <iostream>
#include <array>

using namespace std;

int main() {
    array<float, 3> records{};
    float avg;

    cout << "Please input three record of 40 miles.\n";
    cout << "First record(second):";
    cin >> records[0];
    cout << "Second record(second):";
    cin >> records[1];
    cout << "Third record(second):";
    cin >> records[2];

    avg = (records[0] + records[1] + records[2]) / 3;

    cout << "=====Your Running Records=====" << endl;
    cout << "1: " << records[0] << "s" << endl;
    cout << "2: " << records[1] << "s" << endl;
    cout << "3: " << records[2] << "s" << endl;
    cout << "Your average performance is " << avg << "s" << endl;
    return 0;
}