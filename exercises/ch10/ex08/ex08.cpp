//
// Created by HRF on 2022/2/8.
//
#include <iostream>
#include "list.h"

using namespace std;

int main() {
    List list;
    Item item = 0;

    cout << "Please input the unsigned long number:";
    cin >> item;
    while (item != 0) {
        cin.get();
        list.add(item);
        cout << "Please input next number(0 to quit):";
        cin >> item;
    }

    cout << "=====Visit the list=====" << endl;
    list.visit(visitItem);

    return 0;
}