//
// Created by HRF on 2022/2/7.
//
#include <iostream>
#include "golf.h"

using namespace std;

const int SIZE = 3;

int main() {
    golf golfs[SIZE];

    int i = 0;
    int count = 0;
    while (i < SIZE) {
        if(setgolf(golfs[i])) {
            cin.get();
            i++;
        } else {
            count = i;
            break;
        }
    }

    for (int k = 0; k < count; k++) {
        showgolf(golfs[k]);
    }

    return 0;
}