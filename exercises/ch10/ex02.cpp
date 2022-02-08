//
// Created by HRF on 2022/2/8.
//
#include <iostream>
#include <cstring>

using namespace std;

class Person {
private:
    static const int LIMIT = 25;
    string lname;
    char fname[LIMIT]{};
public:
    Person() { lname = "", fname[0] = '\0'; }; // #1
    Person(const string &ln, const char *fn = "Heyyou"); // #2
    // the following methods display lname and fname
    void Show() const; // firstname lastname format
    void FormalShow() const; // lastname, firstname format
};

int main() {
    Person one;
    Person two("Smythecraft");
    Person three("Dimwiddy", "Sam");
    one.Show();
    cout << endl;
    one.FormalShow();
    two.FormalShow();
    three.FormalShow();
    return 0;
}

Person::Person(const string &ln, const char *fn) {
    lname = ln;
    strcpy(fname, fn);
}

void Person::Show() const {
    if (lname.empty() && fname[0] == '\0' ) {
        cout << "Here is no name.\n";
    } else {
        cout << "Person Name: " << fname << " " << lname << endl;
    }
}

void Person::FormalShow() const {
    if (lname.empty() && fname[0] == '\0' ) {
        cout << "Here is no name.\n";
    } else {
        cout << "Person Name: " << lname << ", " << fname << endl;
    }
}
