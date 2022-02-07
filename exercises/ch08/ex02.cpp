//
// Created by HRF on 2022/2/7.
//
#include <iostream>

using namespace std;

struct CandyBar {
    string brand;
    float weight;
    int calorie;
};

void set_candy(CandyBar &candyBar, string s = "Millennium Munch", float w = 2.85, int c = 350);
void show_candy(const CandyBar &candyBar);

int main() {
    CandyBar cb;
    set_candy(cb);
    show_candy(cb);

    set_candy(cb, "Relph Hu", 2.35, 230);
    show_candy(cb);
    return 0;
}

void set_candy(CandyBar &candyBar, string s, float w, int c) {
    candyBar.brand = s;
    candyBar.weight = w;
    candyBar.calorie = c;
}

void show_candy(const CandyBar &candyBar) {
    cout << "=====CandyBar Information=====\n";
    cout << "Brand: " << candyBar.brand << endl;
    cout << "Weight: " << candyBar.weight << endl;
    cout << "Calorie: " << candyBar.calorie << endl;
}