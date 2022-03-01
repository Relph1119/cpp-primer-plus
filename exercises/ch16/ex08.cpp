//
// Created by HRF on 2022/3/1.
//
#include <iostream>
#include <set>
#include <string>

using namespace std;

int main() {
    set<string> mat_friends, pat_friends, all_friends;

    cout << "Please input the name of Mat's friend:";
    string name;
    while (getline(cin, name) && !name.empty()) {
        mat_friends.insert(name);
        cout << name << " add to Mat's friends list.\n";
        cout << "Please input Mat's next friend name(new line to quit):";
    }
    cout << "\nMat's friends are: \n";
    for (const string &fname: mat_friends) {
        cout << fname << " ";
    }

    cout << "\n\nPlease input the name of Pat's friend:";
    while (getline(cin, name) && !name.empty()) {
        pat_friends.insert(name);
        cout << name << " add to Pat's friends list.\n";
        cout << "Please input Pat's next friend name(new line to quit):";
    }
    cout << "\nPat's friends are: \n";
    for (const string &fname: pat_friends) {
        cout << fname << " ";
    }

    all_friends.insert(mat_friends.begin(), mat_friends.end());
    all_friends.insert(pat_friends.begin(), pat_friends.end());

    cout << "\n\nAll friends are: \n";
    for (const string &fname: all_friends) {
        cout << fname << " ";
    }

    return 0;
}
