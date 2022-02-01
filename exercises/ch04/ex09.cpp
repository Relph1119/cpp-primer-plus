//
// Created by HRF on 2022/2/1.
//
#include "iostream"
#include "string"

using namespace std;

struct CandyBar {
    string brand;
    float weight{};
    int calorie{};
};

int main() {
    auto *snack = new CandyBar[3];
    snack[0].brand = "Mocha Munch";
    snack[0].weight = 2.3;
    snack[0].calorie = 350;
    snack[1].brand = "Hershey bar";
    snack[1].weight = 4.2;
    snack[1].calorie = 550;
    snack[2].brand = "Musketeers";
    snack[2].weight = 2.6;
    snack[2].calorie = 430;

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
