//
// Created by HRF on 2022/2/3.
//
#include "iostream"
#include "fstream"

using namespace std;

struct patrons {
    string name;
    double fund;
};

int main() {
    int patrons_count;
    patrons *patrons_array{};
    bool empty_flag = true;

    string file_name;
    ifstream inFile;
    // input files/patrons.txt
    cout << "Enter the name of the patrons file:";
    getline(cin, file_name);
    inFile.open(file_name);

    if (!inFile.is_open()) {
        cout << "Could not open the file " << file_name << endl;
        cout << "Program terminating.\n";
        exit(EXIT_FAILURE);
    }

    inFile >> patrons_count;
    inFile.get();
    if (patrons_count <= 0) {
        cout << "The number of patrons is invalid.\n";
        cout << "Program terminating.\n";
        exit(EXIT_FAILURE);
    }

    patrons_array = new patrons[patrons_count];
    int index = 0;
    while (!inFile.eof() && index < patrons_count) {
        getline(inFile, patrons_array[index].name);
        inFile >> patrons_array[index].fund;
        inFile.get();
        index++;
    }

    inFile.close();

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
