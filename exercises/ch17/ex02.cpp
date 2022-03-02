//
// Created by HRF on 2022/3/2.
//
#include <iostream>
#include <fstream>

using namespace std;

// files/city.txt
int main(int argc, char *argv[]) {
    if (argc == 1) {
        cout << "Usage: " << argv[0] << " filename" << endl;
    }

    char ch;
    ofstream fout(argv[1], ios_base::out);
    // input data:
    // San Francisco
    // San Rafael
    // Oakland
    // Berkeley
    // Brooklyn
    // Staten Island
    if (fout.is_open()) {
        cout << "Please input the data:" << endl;
        while (cin.get(ch) && ch != '&') {
            fout << ch;
        }
    } else {
        cout << "Can't create the file " << argv[1] << endl;
        exit(EXIT_FAILURE);
    }
    fout.close();
    return 0;
}