//
// Created by HRF on 2022/2/12.
//
#include <iostream>
#include "stack.h"

using namespace std;

const int MAX = 5;

int main() {
    Stack st(MAX);
    Item item;
    cout << "=====Initialize Stack=====\n";
    for (int i = 0; i < MAX; i++) {
        cout << "Please input a unsigned long number:";
        cin >> item;
        cin.get();
        st.push(item);
        cout << "Item(" << item << ") pushed.\n";
    }

    cout << "=====Using copy constructors=====\n";
    Stack st_new(st);
    for (int i = 0; i < MAX; i++) {
        st_new.pop(item);
        cout << "Item poped: " << item << endl;
    }

    cout << "=====Using = operator=====\n";
    Stack st_copy = st;
    for (int i = 0; i < MAX; i++) {
        st_copy.pop(item);
        cout << "Item poped: " << item << endl;
    }

    cout << "Bye!\n";

    return 0;
}