//
// Created by HRF on 2022/2/7.
//
#include <iostream>
#include <cstring>

using namespace std;

struct chaff {
    char dross[20];
    int slag;
};

int set_chaff(chaff &cf);
void set_chaff(chaff &cf, char *dross, int slag);
void show_chaff(const chaff &cf);

const int BUF = 1024;
const int SLEN = 3;

int main() {
    char buffer[BUF];
    auto *cfs = new(buffer) chaff[SLEN];

    int n = 0;
    int count = 0;
    while(n < SLEN) {
        if (set_chaff(cfs[n])) {
            n++;
        } else {
            count = n;
            break;
        }
    }

    for (int i = 0; i < count; i++) {
        show_chaff(cfs[i]);
    }

    return 0;
}

int set_chaff(chaff &cf) {
    char dross[20];
    int slag = 0;

    cout << "Please input the dross of chaff:";
    cin.getline(dross, 20);

    if (dross[0] == '\0') {
        return 0;
    } else {
        cout << "Please input the slag of chaff:";
        cin >> slag;
        cin.get();
        set_chaff(cf, dross, slag);
        return 1;
    }
}


void set_chaff(chaff &cf, char *dross, int slag) {
    strcpy(cf.dross, dross);
    cf.slag = slag;
}

void show_chaff(const chaff &cf) {
    cout << "Chaff's Dross is " << cf.dross << ", slag is " << cf.slag << endl;
}