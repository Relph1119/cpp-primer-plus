//
// Created by HRF on 2022/2/8.
//
#include <iostream>
#include <cstring>

using namespace std;

const int LEN = 19;

class plorg {
private:
    char name[LEN]{};
    int CI;
public:
    plorg(const char st[] = "Plorga", int ci = 50);

    void reset_ci(int n);

    void show() const;
};

int main() {
    plorg plg;

    plg.show();
    plg.reset_ci(60);
    plg.show();

    plorg p("Relph", 40);
    p.show();

    return 0;
}

plorg::plorg(const char *st, int ci) {
    strcpy(name, st);
    CI = ci;
}

void plorg::reset_ci(int n) {
    CI = n;
}

void plorg::show() const {
    cout << "Plorg name is " << name << ", CI is " << CI << endl;
}
