//
// Created by HRF on 2022/1/31.
//
#include <iostream>

using namespace std;

const int minutes_pre_degree = 60;
const int seconds_pre_minute = 60;

int main() {
    int degree, minute, second;
    float degrees;

    cout << "Enter a latitude in degrees, minutes and seconds:\n";
    cout << "First, enter the degrees:";
    cin >> degree;
    cout << "Next, enter the minutes of arc:";
    cin >> minute;
    cout << "Finally, enter the seconds of arc:";
    cin >> second;

    degrees = degree + float(minute) / minutes_pre_degree +
            float(second)/(seconds_pre_minute * minutes_pre_degree);

    cout << degree << " degrees, ";
    cout << minute << " minutes, ";
    cout << second << " seconds = ";
    cout << degrees << " degrees." << endl;

    return 0;
}