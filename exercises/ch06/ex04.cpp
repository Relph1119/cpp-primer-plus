//
// Created by HRF on 2022/2/3.
//
#include <cstring>
#include "iostream"

using namespace std;

const int strsize = 40;
const int USERSIZE = 40;
//Benevolent Order of Programmer name structure
struct bop {
    char fullname[strsize];    // real name
    char title[strsize];       // job title
    char bopname[strsize];     // secret BOP name
    int preference;            // 0 = fullname,1 = title, 2 = bopname
};

void show_menu();

void print_by_name(bop bops[]);

void print_by_title(bop bops[]);

void print_by_bopname(bop bops[]);

void print_by_preference(bop bops[]);

int main() {
    char choice;
    bop bop_programmers[USERSIZE] = {
            {"Wimp Macho",   "Programmer",        "MIPS",  0},
            {"Raki Rhodes",  "Junior Programmer", "",      1},
            {"Celia Laiter", "",                  "MIPS",  2},
            {"Hoppy Hipman", "Analyst Trainee",   "",      1},
            {"Pat Hand",     "",                  "LOOPY", 2}
    };
    show_menu();
    cout << "Enter your choice:";
    cin.get(choice).get();

    while (choice != 'q') {
        switch (choice) {
            case 'a':
                print_by_name(bop_programmers);
                break;
            case 'b':
                print_by_title(bop_programmers);
                break;
            case 'c':
                print_by_bopname(bop_programmers);
                break;
            case 'd':
                print_by_preference(bop_programmers);
                break;
            default:
                cout << "Please enter character a, b, c, d, or q: ";
        }
        cout << "Next choice:";
        cin.get(choice).get();
    }
    cout << "Bye!" << endl;
    return 0;
}

void print_by_name(bop bops[]) {
    for (int i = 0; i < USERSIZE; i++) {
        if (strlen(bops[i].fullname) == 0)
            break;
        else
            cout << bops[i].fullname << endl;
    }
}

void print_by_title(bop bops[]) {
    for (int i = 0; i < USERSIZE; i++) {
        if (strlen(bops[i].title) == 0)
            break;
        else
            cout << bops[i].title << endl;
    }
}

void print_by_bopname(bop bops[]) {
    for (int i = 0; i < USERSIZE; i++) {
        if (strlen(bops[i].bopname) == 0)
            break;
        else
            cout << bops[i].bopname << endl;
    }
}

void print_by_preference(bop bops[]) {
    for (int i = 0; i < USERSIZE; i++) {
        if (strlen(bops[i].fullname) == 0)
            break;
        else {
            switch (bops[i].preference) {
                case 0:
                    cout << bops[i].fullname << endl;
                    break;
                case 1:
                    cout << bops[i].title << endl;
                    break;
                case 2:
                    cout << bops[i].bopname << endl;
                    break;
            }
        }
    }
}

void show_menu() {
    cout << "Benevolent Order of Programmers Report\n"
            "a. display by name \t\tb. display by title\n"
            "c. display by bopname\t\td. display by preference\n"
            "q. quit\n";
}