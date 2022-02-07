//
// Created by HRF on 2022/2/7.
//
#include <iostream>
#include "sales.h"

using namespace std;
using namespace SALES;

void SALES::setSales(Sales &s, const double ar[], int n) {
    double sum = 0;
    if (n >= QUARTERS) {
        for (int i = 0; i < QUARTERS; i++) {
            s.sales[i] = ar[i];
        }
    } else {
        for (int i = 0; i < n; i++) {
            s.sales[i] = ar[i];
        }
        for (int i = n; i < QUARTERS; i++) {
            s.sales[i] = 0;
        }
    }

    s.max = s.min = s.sales[0];
    for (double sale : s.sales) {
        sum += sale;
        if (s.min > sale) {
            s.min = sale;
        }
        if (s.max < sale) {
            s.max = sale;
        }
    }

    s.average = sum / QUARTERS;
}

void SALES::setSales(Sales &s) {
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

    setSales(s, ar, QUARTERS);
}

void SALES::showSales(const Sales &s) {
    cout << "\n=====Sale's Quarter List=====\n";
    for (int i = 0; i < QUARTERS; i++) {
        cout << "No." << i + 1 << " sale: " << s.sales[i] << endl;
    }
    cout << "Average: " << s.average << endl;
    cout << "Max: " << s.max << endl;
    cout << "Min: " << s.min << endl;
}