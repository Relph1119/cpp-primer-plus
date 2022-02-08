//
// Created by HRF on 2022/2/8.
//
#include "list.h"
#include <iostream>

using namespace std;

List::List() {
    top = 0;
}

bool List::isempyt() const {
    return top == 0;
}

bool List::isfull() const {
    return top == MAX;
}

bool List::add(const Item &item) {
    if (top < MAX) {
        items[top++] = item;
        return true;
    } else {
        return false;
    }
}

void List::visit(void (*pf)(Item &)) {
    for (int i = 0; i < top; i++) {
        pf(items[i]);
    }
}

void visitItem(Item &item) {
    cout << "Item's info: " << item << endl;
}
