//
// Created by HRF on 2022/3/2.
//
#include <iostream>
#include <fstream>
#include <set>
#include <string>
#include <algorithm>

using namespace std;

void ShowReview(const string &s);

int main() {
    ifstream fin_mat("files/mat.dat", ios_base::in);
    ifstream fin_pat("files/pat.dat", ios_base::in);

    string name;
    set<string> mat_friends, pat_friends, friends;

    if (!fin_mat.is_open() || !fin_pat.is_open()) {
        cout << "Can't open files!" << endl;
        exit(EXIT_FAILURE);
    }

    while (getline(fin_mat, name) && name.size() > 0) {
        mat_friends.insert(name);
    }
    cout << "Mat's friends are: \n";
    for_each(mat_friends.begin(), mat_friends.end(), ShowReview);

    while (getline(fin_pat, name) && name.size() > 0) {
        pat_friends.insert(name);
    }
    cout << "\nPat's friends are: \n";
    for_each(pat_friends.begin(), pat_friends.end(), ShowReview);

    fin_mat.close();
    fin_pat.close();
    friends.insert(mat_friends.begin(), mat_friends.end());
    friends.insert(pat_friends.begin(), pat_friends.end());

    ofstream fout("files/friends.txt", ios_base::out);
    if (!fout.is_open()) {
        cout << "Can't create the file!" << endl;
        exit(EXIT_FAILURE);
    }

    for (const auto &s : friends) {
        fout << s << endl;
    }
    fout.close();

    ifstream fin("files/friends.txt", ios_base::in);
    if (!fin.is_open()) {
        cout << "Can't open the file!" << endl;
        exit(EXIT_FAILURE);
    }

    cout << "\nAll Guest list : \n";
    while (getline(fin, name)) {
        cout << name << endl;
    }
    fin.close();
    return 0;
}

void ShowReview(const string &s) {
    cout << s << endl;
}