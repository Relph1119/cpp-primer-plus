//
// Created by HRF on 2022/1/31.
//
#include <iostream>

using namespace std;

int main() {
    float distance_mile, distance_km;
    float fuel_gallon, fuel_liter;
    float fuel_consume;

    cout << "Please input the distance(miles):";
    cin >> distance_mile;
    cout << "Please input the fuel consume(gallon):";
    cin >> fuel_gallon;
    fuel_consume = distance_mile / fuel_gallon;
    cout << "The fuel consume is " << fuel_consume << " mpg(miles/gallon)." << endl;

    cout << "Please input the distance(kilometer):";
    cin >> distance_km;
    cout << "Please input the fuel consume(liter):";
    cin >> fuel_liter;
    fuel_consume = (fuel_liter / distance_km) * 100;
    cout << "The fuel consume is " << fuel_consume << " L/100KM." << endl;
    return 0;
}
