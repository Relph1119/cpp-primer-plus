//
// Created by HRF on 2022/2/11.
//
#include <iostream>
#include "stonewt.h"

using namespace std;

const int SIZE = 6;

int main() {
    Stonewt stones[SIZE] = {275, Stonewt(285.7), Stonewt(21, 8)};
    double value;

    Stonewt eleven = Stonewt(11, 0.0);
    Stonewt max = stones[0];
    Stonewt min = stones[0];
    int count = 0;

    for (int i = 3; i < SIZE; i++) {
        cout << "Please input the No." << i + 1 << " stonewt(in pounds):";
        cin >> value;
        stones[i] = Stonewt(value);
        cin.get();
    }

    for (const auto &stone : stones) {
        if (max < stone) {
            max = stone;
        }
        if (min > stone) {
            min = stone;
        }
        if (stone > eleven) {
            count++;
        }
    }

    cout << "The max weight is ";
    max.show_stn();
    cout << "The min weight is ";
    min.show_stn();
    cout << "The number of stone heavy than eleven is " << count << endl;

    return 0;
}