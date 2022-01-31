//
// Created by HRF on 2022/1/31.
//
#include "iostream"

using namespace std;

const int HOUR_PRE_DAY = 24;
const int MINUTE_PRE_HOUR = 60;
const int SECOND_PRE_MINUTE = 60;

int main() {

    long long seconds;
    int days, hours, minutes;

    cout << "Enter the number of seconds:";
    cin >> seconds;
    cout << seconds << " seconds = ";

    days = seconds / (HOUR_PRE_DAY * MINUTE_PRE_HOUR * SECOND_PRE_MINUTE);
    seconds = seconds % (HOUR_PRE_DAY * MINUTE_PRE_HOUR * SECOND_PRE_MINUTE);
    hours = seconds / (MINUTE_PRE_HOUR * SECOND_PRE_MINUTE);
    seconds = seconds % (MINUTE_PRE_HOUR * SECOND_PRE_MINUTE);
    minutes = seconds / SECOND_PRE_MINUTE;
    seconds = seconds % SECOND_PRE_MINUTE;

    cout << days << " days, " << hours << " hours, " << minutes << " minutes, " << seconds << " seconds" << endl;
    return 0;
}
