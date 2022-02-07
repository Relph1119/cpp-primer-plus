//
// Created by HRF on 2022/2/2.
//
#include <iostream>

using namespace std;

const int MONTHS = 12;

int main() {
    const string Month[] = {"JAN", "FEB", "MAR", "APR", "MAY", "JUN", "JUL", "AUG", "SEP", "OCT", "NOV", "DEC"};
    int sale_amount[MONTHS];
    long sum = 0;

    for (int i = 0; i < MONTHS; i++) {
        cout << "Please input the sale amount of " << Month[i] << ":";
        cin >> sale_amount[i];
    }

    cout << "=====The Sale Amount of This Year=====" << endl;
    for (int i = 0; i < MONTHS; i++) {
        cout << Month[i] << " 's sale amount is " << sale_amount[i] << endl;
        sum += sale_amount[i];
    }

    cout << "Total sale of this year is " << sum << "." << endl;
    return 0;
}
