//
// Created by HRF on 2022/2/7.
//
#include <iostream>
#include "sales.h"

using namespace std;
using namespace SALES;

int main() {
    Sales s{};

    cout << "Please input the sales of this year:\n";
    setSales(s);
    showSales(s);

    return 0;
}