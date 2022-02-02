//
// Created by HRF on 2022/2/2.
//
#include "iostream"

using namespace std;

const int MONTHS = 12;
const int YEARS = 3;

int main() {
    const string Month[] = {"JAN", "FEB", "MAR", "APR", "MAY", "JUN", "JUL", "AUG", "SEP", "OCT", "NOV", "DEC"};
    int sale_amount[YEARS][MONTHS];
    long total = 0;

    for (int i = 0; i < YEARS; i++) {
        for (int j = 0; j < MONTHS; j++) {
            cout << "Please input " << (i + 1) << " year sale amount of " << Month[j] << ":";
            cin >> sale_amount[i][j];
        }
    }

    for (int i = 0; i < YEARS; i++) {
        int sum = 0;
        for (int j = 0; j < MONTHS; j++) {
            sum += sale_amount[i][j];
        }
        total += sum;
        cout << "The sale amount of " << (i + 1) << " year is " << sum << "." << endl;
    }

    cout << "The Total sale amount is " << total << endl;
    return 0;
}
