//
// Created by HRF on 2022/2/7.
//
#include <iostream>
#include "sales.h"

using namespace std;
using namespace SALES;

int main() {
    cout << "Please input the sales of this year:\n";
    Sales s{};
    s.showSales();

    return 0;
}