//
// Created by HRF on 2022/2/1.
//
#include "iostream"

using namespace std;

const int LEN = 40;

struct Pizza {
    char company_name[LEN];
    float diameter;
    float weight;
};

int main() {
    auto *pizza = new Pizza;
    cout << "Please input the Pizza's information:" << endl;
    cout << "Pizza's diameter(inches):";
    cin >> pizza->diameter;
    cin.get();
    cout << "Pizza's Company:";
    cin.getline(pizza->company_name, 40);
    cout << "Pizza's weight(pounds):";
    cin >> pizza->weight;

    cout << "\n=====The Pizza's Information=====" << endl;
    cout << "Pizza's Company Name: " << pizza->company_name << endl;
    cout << "Pizza's Diameter: " << pizza->diameter << endl;
    cout << "Pizza's Weight: " << pizza->weight << endl;

    delete pizza;
    return 0;
}
