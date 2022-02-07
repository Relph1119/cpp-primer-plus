//
// Created by HRF on 2022/2/3.
//
#include <iostream>

using namespace std;

struct patrons {
    string name;
    double fund;
};

int main() {
    int patrons_count;
    patrons *patrons_array{};
    bool empty_flag = true;

    cout << "Please input the number of patrons:";
    cin >> patrons_count;
    cin.get();

    patrons_array = new patrons[patrons_count];

    for (int i = 0; i < patrons_count; i++) {
        cout << "Please input the name of patrons:";
        getline(cin, patrons_array[i].name);
        cout << "Please input the fund of " << patrons_array[i].name << ":";
        cin >> patrons_array[i].fund;
        cin.get();
    }

    cout << "=====Grand Patrons=====" << endl;
    for (int i = 0; i < patrons_count; i++) {
        if (patrons_array[i].fund >= 10000) {
            cout << patrons_array[i].name << ": " << patrons_array[i].fund << endl;
            empty_flag = false;
        }
    }

    if (empty_flag) {
        cout << "none" << endl;
    }

    empty_flag = true;
    cout << "=====Other Patrons=====" << endl;
    for (int i = 0; i < patrons_count; i++) {
        if (patrons_array[i].fund < 10000) {
            cout << patrons_array[i].name << ": " << patrons_array[i].fund << endl;
            empty_flag = false;
        }
    }

    if (empty_flag) {
        cout << "none" << endl;
    }

    return 0;
}