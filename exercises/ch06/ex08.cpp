//
// Created by HRF on 2022/2/3.
//
#include <iostream>
#include <fstream>

using namespace std;

int main() {
    string file_name;
    ifstream inFile;
    // input files/text.txt
    cout << "Enter the name of the file:";
    getline(cin, file_name);
    inFile.open(file_name);

    if (!inFile.is_open()) {
        cout << "Could not open the file " << file_name << endl;
        cout << "Program terminating.\n";
        exit(EXIT_FAILURE);
    }

    char ch;
    int char_cnt = 0;
    while (!inFile.eof()) {
        inFile >> ch;
        char_cnt++;
    }

    if (char_cnt == 0) {
        cout << "No content processed.\n";
    } else {
        cout << "The file " << file_name << " contains " << char_cnt << " characters.\n";
    }

    inFile.close();
    return 0;
}