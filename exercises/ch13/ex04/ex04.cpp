//
// Created by HRF on 2022/2/15.
//
#include <iostream>
#include "vintageport.h"

using namespace std;

int main() {
    Port gallo = Port("Gallo", "tawny", 20);
    gallo.Show();
    cout << gallo << endl;
    cout << endl;

    VintagePort vintage_gallo = VintagePort("Gallo", 20, "The Noble", 25);
    vintage_gallo.Show();
    cout << vintage_gallo;

    return 0;
}
