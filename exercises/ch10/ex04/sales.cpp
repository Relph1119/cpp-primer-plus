//
// Created by HRF on 2022/2/7.
//
#include <iostream>
#include "sales.h"

using namespace std;
using namespace SALES;

Sales::Sales(const double ar[], int n) {
    double sum = 0;
    if (n >= QUARTERS) {
        for (int i = 0; i < QUARTERS; i++) {
            sales[i] = ar[i];
        }
    } else {
        for (int i = 0; i < n; i++) {
            sales[i] = ar[i];
        }
        for (int i = n; i < QUARTERS; i++) {
            sales[i] = 0;
        }
    }

    max = min = sales[0];
    for (double sale : sales) {
        sum += sale;
        if (min > sale) {
            min = sale;
        }
        if (max < sale) {
            max = sale;
        }
    }

    average = sum / QUARTERS;
}

Sales::Sales() {
    double ar[QUARTERS]{};
    int i = 0;
    do {
        cout << "Enter a number:";
        if (cin >> ar[i]) {
            cin.get();
            i++;
        } else {
            cin.get();
            cout << "ERROR, Reenter a number:";
        }
    } while (i < QUARTERS);

    *this = Sales(ar, QUARTERS);
}

void Sales::showSales() {
    cout << "\n=====Sale's Quarter List=====\n";
    for (int i = 0; i < QUARTERS; i++) {
        cout << "No." << i + 1 << " sale: " << sales[i] << endl;
    }
    cout << "Average: " << average << endl;
    cout << "Max: " << max << endl;
    cout << "Min: " << min << endl;
}