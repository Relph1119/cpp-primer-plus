//
// Created by HRF on 2022/2/2.
//
#include <iostream>

using namespace std;

struct car {
    string manufacturer;
    int year{};
};

int main() {
    int car_num;
    car *cars;

    cout << "How many cars do you wish to catalog?";
    cin >> car_num;
    cin.get();
    cars = new car[car_num];

    for (int i = 0; i < car_num; i++) {
        cout << "Car #" << (i + 1) << endl;
        cout << "Please enter the make:";
        getline(cin, cars[i].manufacturer);
        cout << "Please enter the year made:";
        cin >> cars[i].year;
        cin.get();
    }

    cout << "Here is your collection:" << endl;
    for (int i = 0; i < car_num; i++) {
        cout << cars[i].year << " " << cars[i].manufacturer << endl;
    }
    return 0;
}
