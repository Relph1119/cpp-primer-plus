//
// Created by HRF on 2022/2/8.
//
#include <iostream>

using namespace std;

class Move {
private:
    double x;
    double y;
public:
    Move(double a = 0, double b = 0); //sets x, y to a, b
    void showmove() const;

    Move add(const Move &m) const;

    // this function adds x of m to x of invoking object to get new x,
    // adds y of m to y of invoking object to get new y, creates a new
    // move object initialized to new x, y values and returns it
    void reset(double a = 0, double b = 0); // resets x, y to a, b
};

int main() {
    Move a, b(7.8, 5.6);
    double x, y;

    a.showmove();
    b.showmove();

    cout << "Please input x and y:";
    cin >> x >> y;
    cout << "Reset Object A:\n";
    a.reset(x, y);
    a.showmove();
    b.showmove();

    cout << "Object A add B:\n";
    a = a.add(b);
    a.showmove();
    b.showmove();

    return 0;
}

Move::Move(double a, double b) {
    x = a;
    y = b;
}

void Move::showmove() const {
    cout << "This Move's x is " << x << ", y is " << y << endl;
}

Move Move::add(const Move &m) const {
    Move temp;
    temp.x = x + m.x;
    temp.y = y + m.y;
    return temp;
}

void Move::reset(double a, double b) {
    x = a;
    y = b;
}
