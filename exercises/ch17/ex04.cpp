//
// Created by HRF on 2022/3/2.
//
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string line;

    ifstream fin1("files/file1.txt", ios_base::in);
    ifstream fin2("files/file2.txt", ios_base::in);
    ofstream fout("files/combfile.txt", ios_base::out);

    bool file1_flag = false;
    if (fin1.is_open() && fin2.is_open() && fout.is_open()) {
        while (!fin1.eof() || !fin2.eof()) {
            if (getline(fin1, line) && line.size() > 0) {
                fout << line;
                file1_flag = true;
            }
            if (getline(fin2, line) && line.size() > 0) {
                if (file1_flag) {
                    fout << " ";
                }
                fout << line;
                file1_flag = false;
            }
            fout << endl;
        }

    } else {
        cout << "Can't open the file!" << endl;
        exit(EXIT_FAILURE);
    }

    cout << "File comb complete!" << endl;
    fin1.close();
    fin2.close();
    fout.close();
    return 0;
}