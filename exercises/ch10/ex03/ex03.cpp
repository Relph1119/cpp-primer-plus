//
// Created by HRF on 2022/2/7.
//
#include <iostream>
#include "golf.h"

using namespace std;

const int SIZE = 3;

int main() {
    golf golfs[SIZE] = {};

    for (const auto &golf : golfs) {
        golf.showgolf();
    }

    return 0;
}