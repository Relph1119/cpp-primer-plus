//
// Created by HRF on 2022/1/30.
//
#include <iostream>

using namespace std;

double calc_astro(double value);

int main() {
    double astro_unit, light_year;

    cout << "Enter the number of light years:";
    cin >> light_year;

    astro_unit = calc_astro(light_year);
    cout << light_year << " light years = ";
    cout << astro_unit << " astronomical units." << endl;

    return 0;
}

double calc_astro(double value) {
    return 63240 * value;
}