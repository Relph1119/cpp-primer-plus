//
// Created by HRF on 2022/1/30.
//
#include "iostream"

using namespace std;

int main() {
    double distance_long;
    cout << "Please input the distance (in long):";
    cin >> distance_long;

    double distance_yard = distance_long * 220;
    cout << "The Distance " << distance_long << " long";
    cout << " is " << distance_yard << " yard." << endl;

    return 0;
}