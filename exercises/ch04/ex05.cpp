//
// Created by HRF on 2022/2/1.
//
#include "iostream"
#include "string"

using namespace std;

struct CandyBar {
    string brand;
    float weight;
    int calorie;
};

int main() {
    CandyBar snack = {"Mocha Munch",
                      2.3,
                      350};
    cout << "=====CandyBar Info=====" << endl;
    cout << "Brand: " << snack.brand << endl;
    cout << "Weight: " << snack.weight << endl;
    cout << "Calorie: " << snack.calorie << endl;

    return 0;
}