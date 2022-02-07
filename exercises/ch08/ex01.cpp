//
// Created by HRF on 2022/2/7.
//
#include <iostream>

using namespace std;

void print_string(const char *str, int n = 0);

int main() {
    print_string("Hello, Relph!");
    print_string("Hello, Relph!");
    print_string("Hello, Relph!", 5);
    return 0;
}

void print_string(const char *str, int n) {
    static int call_func_count = 0;

    call_func_count++;
    if (n == 0) {
        cout << "arguments = 0, call_func_count = " << call_func_count << endl;
        cout << str << endl;
    } else {
        cout << "arguments != 0, call_func_count = " << call_func_count << endl;
        for (int i = 0; i < call_func_count; i++) {
            cout << str << endl;
        }
    }
}