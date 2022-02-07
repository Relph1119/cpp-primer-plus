//
// Created by HRF on 2022/2/5.
//
#include <iostream>

using namespace std;

const int Max = 5;

// function prototypes
double *fill_array(double *start, double *end);
void show_array(double *start, double *end);
void revalue(double r, double *start, double *end);

int main() {
    double properties[Max];

    double *end = fill_array(properties, properties + Max);
    show_array(properties, end);
    if (end - properties > 0) {
        cout << "Enter revaluation factor: ";
        double factor;
        while (!(cin >> factor))    // bad input
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "Bad input; Please enter a number: ";
        }
        revalue(factor, properties, end);
        show_array(properties, end);
    }
    cout << "Done.\n";
    return 0;
}

double *fill_array(double *start, double *end) {
    double temp;
    double *p;
    for (p = start; p != end; p++) {
        int index = p - start + 1;
        cout << "Enter value #" << index << ":";
        cin >> temp;
        if (!cin) {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "Bad input; input process terminated.\n";
            break;
        } else if (temp < 0) {
            break;
        }
        *p = temp;
    }
    return p;
}

// the following function can use, but not alter,
// the array whose address is ar
void show_array(double *start, double *end) {
    double *p;
    for (p = start; p != end; p++) {
        int index = p - start + 1;
        cout << "Property #" << index << ": $" << *p << endl;
    }
}

// multiplies each element of ar[] by r
void revalue(double r, double *start, double *end) {
    double *p;
    for (p = start; p != end; p++) {
        *p *= r;
    }
}
