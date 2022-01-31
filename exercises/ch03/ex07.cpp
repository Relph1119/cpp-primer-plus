//
// Created by HRF on 2022/1/31.
//
#include "iostream"

using namespace std;

const float MILE_PRE_HKM = 62.14;
const float LITER_PRE_GALLON = 3.875;

int main() {
    float fuel_eur, fuel_us;

    cout << "Please input the fuel in europe(L/100km):";
    cin >> fuel_eur;

    fuel_us = MILE_PRE_HKM / (fuel_eur / LITER_PRE_GALLON);

    cout << fuel_eur << " L/100km = " << fuel_us << " mpg." << endl;

    return 0;
}
