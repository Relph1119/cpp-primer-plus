//
// Created by HRF on 2022/2/11.
//
#include <iostream>
#include <cstdlib>      // rand(), srand() prototypes
#include <ctime>        // time() prototype
#include "vect.h"

int main() {
    using namespace std;
    using VECTOR::Vector;
    srand(time(0));     // seed random-number generator
    double direction;
    Vector step;
    Vector result(0.0, 0.0);
    unsigned long steps = 0;
    double target;
    double dstep;

    unsigned long max = 0;
    unsigned long min = 0;
    unsigned long sum = 0;
    unsigned int count = 0;

    cout << "Enter target distance (q to quit): ";
    while (cin >> target) {
        cout << "Enter step length: ";
        if (!(cin >> dstep))
            break;

        while (result.magval() < target) {
            direction = rand() % 360;
            step.reset(dstep, direction, Vector::POL);
            result = result + step;
            steps++;
        }
        cout << "After " << steps << " steps, the subject "
                                     "has the following location:\n";
        cout << result << endl;
        result.polar_mode();
        cout << " or\n" << result << endl;
        cout << "Average outward distance per step = "
             << result.magval() / steps << endl;

        if (max<steps)
            max = steps;
        if (min == 0)
            min = max;
        if (min > steps) {
            min = steps;
        }
        sum += steps;
        count++;

        steps = 0;
        result.reset(0.0, 0.0);
        cout << "Enter target distance (q to quit): ";
    }

    cout << "Here are " << count << " times, the statistic is \n";
    cout << "Max step = " << max << endl;
    cout << "Min step = " << min << endl;
    cout << "Average step = " << sum / count << endl;
    cout << "Bye!\n";
    return 0;
}
