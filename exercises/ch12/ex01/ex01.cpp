//
// Created by HRF on 2022/2/11.
//
#include "cow.hpp"
#include <iostream>
#include <cstring>

using namespace std;

int main() {
    cout << "Initialize cow's array(2 elements)\n";
    Cow cows[2] = {{"Tom", "Sleeppy", 200}};

    cout << "No.1:\n";
    cows[0].ShowCow();

    cout << "No.2:\n";
    cows[1].ShowCow();

    cout << "Using operator=() to init No.2:\n";
    cows[1] = cows[0];
    cows[1].ShowCow();

    cout << "Using copy to init No.3:\n";
    Cow copy_cow(cows[0]);
    copy_cow.ShowCow();

    return 0;
}