//
// Created by HRF on 2022/2/2.
//
#include "iostream"

using namespace std;

const float DAPHNE_RATE = 0.1;
const float CLEO_RATE = 0.05;
const int DEPOSIT_BASE = 100;

int main() {
    float daphne = DEPOSIT_BASE;
    float cleo = DEPOSIT_BASE;

    int years = 0;

    cout << "=====Daphne And Cleo's Deposit=====" << endl;
    while (cleo <= daphne) {
        cout << years++ << " years: Daphne = " << daphne;
        cout << "\tCleo = " << cleo << endl;

        daphne += DAPHNE_RATE * DEPOSIT_BASE;
        cleo += CLEO_RATE * cleo;
    }

    cout << "Investment values after " << years << " years:" << endl;
    cout << "Daphne = " << daphne << endl;
    cout << "Cleo = " << cleo << endl;
    return 0;
}
