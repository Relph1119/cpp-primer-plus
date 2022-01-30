//
// Created by HRF on 2022/1/30.
//
#include "iostream"

using namespace std;

float calc_fahrenheit(float value);

int main() {
    float celsius_degree, fahrenheit_degree;

    cout << "Please enter a Celsius value:";
    cin >> celsius_degree;

    fahrenheit_degree = calc_fahrenheit(celsius_degree);

    cout << celsius_degree << " degrees Celsius is " << fahrenheit_degree << " degrees Fahrenheit." << endl;

    return 0;
}

float calc_fahrenheit(float value) {
    return 1.8 * value + 32.0;
}

