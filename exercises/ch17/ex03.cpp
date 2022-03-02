//
// Created by HRF on 2022/3/2.
//
#include <iostream>
#include <fstream>

using namespace std;

int main() {
    string src_filename;
    string dest_filename;

    // input files/city.txt
    cout << "Enter name of the src file:";
    getline(cin, src_filename);

    // input files/city_copy.txt
    cout << "Enter name of the dest file:";
    getline(cin, dest_filename);

    ifstream fin(src_filename, ios_base::in);
    ofstream fout(dest_filename, ios_base::out);

    if (!fin.is_open()) {
        cout << "Can't open the file " << src_filename << " !" << endl;
        exit(EXIT_FAILURE);
    }
    if (!fout.is_open()) {
        cout << "Can't open the file " << dest_filename << " !" << endl;
        exit(EXIT_FAILURE);
    }

    char ch;
    while (fin.get(ch))
        fout << ch;

    cout << "Complete file copy!" << endl;
    fin.close();
    fout.close();
    return 0;
}