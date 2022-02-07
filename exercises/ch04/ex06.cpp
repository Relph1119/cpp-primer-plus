//
// Created by HRF on 2022/2/1.
//
#include <iostream>
#include <string>

using namespace std;

struct CandyBar {
    string brand;
    float weight;
    int calorie;
};

int main() {
    CandyBar snack[3] = {
            {"Mocha Munch", 2.3, 350},
            {"Hershey bar", 4.2, 550},
            {"Musketeers",  2.6, 430}};

    cout << "=====CandyBar1 Info=====" << endl;
    cout << "Brand: " << snack[0].brand << endl;
    cout << "Weight: " << snack[0].weight << endl;
    cout << "Calorie: " << snack[0].calorie << endl;

    cout << "=====CandyBar2 Info=====" << endl;
    cout << "Brand: " << snack[1].brand << endl;
    cout << "Weight: " << snack[1].weight << endl;
    cout << "Calorie: " << snack[1].calorie << endl;

    cout << "=====CandyBar2 Info=====" << endl;
    cout << "Brand: " << snack[2].brand << endl;
    cout << "Weight: " << snack[2].weight << endl;
    cout << "Calorie: " << snack[2].calorie << endl;
    return 0;
}
