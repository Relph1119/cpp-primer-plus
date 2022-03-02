//
// Created by HRF on 2022/3/2.
//
#include <iostream>
#include "emp.h"

using namespace std;

const int MAX = 4;
enum classkind {
    Employee, Manager, Fink, Highfink
};

const char *file = "files/emp.txt";

int show_contents();

void show_menu();

int main() {
//    Employee
//    Name: Trip Harris
//    Job Title: Thumper
//    Manager
//    Name: Amorphia Spindragon
//    Job Title: Nuancer
//    In charge of: 5
//    Fink
//    Name: Matt Oggs
//    Job Title: Oiler
//    REPORT TO: Juno Barr
//    Highfink
//    Name: Amorphia Spindragon
//    Job Title: Nuancer
//    In charge of: 5
//    Reportsto: Curly Kew

    // show initial contents
    int count = show_contents();

    // add new data
    ofstream fout(file, ios_base::out | ios_base::app);

    if (!fout.is_open()) {
        cout << "Can't create the file!" << endl;
        exit(EXIT_FAILURE);
    } else {
        char kind;
        while (count < MAX) {
            show_menu();
            while (cin >> kind && (kind != '1' && kind != '2' && kind != '3' && kind != '4' && kind != 'q')) {
                cout << "Enter either 1 or 2 or 3 or 4 or q:";
            }
            while (cin.get() != '\n')
                continue;
            if (kind == 'q') {
                break;
            }

            abstr_emp *p_emp = new employee();
            switch (kind) {
                case '1':
                    p_emp = new employee();
                    p_emp->SetAll();
                    fout << Employee << endl;
                    break;
                case '2':
                    p_emp = new manager();
                    p_emp->SetAll();
                    fout << Manager << endl;
                    break;
                case '3':
                    p_emp = new fink();
                    p_emp->SetAll();
                    fout << Fink << endl;
                    break;
                case '4':
                    p_emp = new highfink();
                    p_emp->SetAll();
                    fout << Highfink << endl;
                    break;
                default:;
            }
            p_emp->writeall(fout);
            count++;
        }
    }
    fout.close();
    cout << endl;

    // show revised file
    show_contents();
    return 0;
}

void show_menu() {
    cout << "Please choice one to add:\n";
    cout << "1) employee     2) manager\n";
    cout << "3) fink         4) highfink\n";
    cout << "q) quit\n";
}

int show_contents() {
    ifstream fin(file);
    int n = 0;

    if (fin.is_open()) {
        cout << "Here are the current contents of the file:\n";

        abstr_emp *pc[MAX];
        int class_type;

        while (fin >> class_type) {
            fin.get();
            switch (class_type) {
                case Employee:
                    pc[n] = new employee;
                    pc[n++]->getall(fin);
                    break;
                case Manager:
                    pc[n] = new manager;
                    pc[n++]->getall(fin);
                    break;
                case Fink:
                    pc[n] = new fink;
                    pc[n++]->getall(fin);
                    break;
                case Highfink:
                    pc[n] = new highfink;
                    pc[n++]->getall(fin);
                    break;
                default:;
            }
        }

        for (int i = 0; i < n; i++) {
            pc[i]->ShowAll();
        }
    }
    fin.close();
    return n;
}