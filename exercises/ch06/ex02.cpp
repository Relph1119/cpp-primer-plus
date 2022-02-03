//
// Created by HRF on 2022/2/3.
//
#include "iostream"
#include "array"

using namespace std;

const int LEN = 10;

int main() {
    array<double, LEN> donation{};
    double number;
    int count = 0;
    double sum, avg;
    sum = 0;

    cout << "Please input the double numerical:";
    cin >> number;
    while (number != 0 && count < LEN) {
        donation[count] = number;
        sum += donation[count];
        count++;
        cout << "Please input next double numerical:";
        cin >> number;
    }
    avg = sum / LEN;

    int bigger_count = 0;
    for (int i = 0; i < LEN; i++) {
        if (donation[i] > avg) {
            bigger_count++;
        }
    }

    cout << "The average of donation array is " << avg << "." << endl;
    cout << "Here is " << bigger_count << " data bigger than average." << endl;

    return 0;
}