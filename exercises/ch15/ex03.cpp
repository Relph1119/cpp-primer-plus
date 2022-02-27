//error4.cpp - using exception classes
#include <iostream>
#include <cmath> // or math.h, unix users may need -lm flag

using namespace std;

class unexpexcted_mean : public logic_error {
private:
    double v1;
    double v2;
public:
    unexpexcted_mean(double a = 0, double b = 0, string s = "mean error") : v1(a), v2(b), logic_error(s) {}

    virtual void mesg() = 0;

    virtual ~unexpexcted_mean() {}
};

class bad_hmean : public unexpexcted_mean {
public:
    bad_hmean(double a = 0, double b = 0, string s = "HMean") : unexpexcted_mean(a, b, s) {}

    void mesg();
};

class bad_gmean : public unexpexcted_mean {
public:
    bad_gmean(double a = 0, double b = 0, string s = "GMean") : unexpexcted_mean(a, b, s) {}

    void mesg();
};

void unexpexcted_mean::mesg() {
    cout << v1 << " " << v2 << endl;
}

void bad_hmean::mesg() {
    cout << std::logic_error::what() << endl;
    cout << "HMean, Invalid argument: ";
    unexpexcted_mean::mesg();
}

void bad_gmean::mesg() {
    cout << std::logic_error::what() << endl;
    cout << "GMean, Invalid argument: ";
    unexpexcted_mean::mesg();
}

// function prototypes
double hmean(double a, double b);

double gmean(double a, double b);

int main() {
    double x, y, z;

    cout << "Enter two numbers:";
    while (cin >> x >> y) {
        try {                  // start of try block
            z = hmean(x, y);
            cout << "Harmonic mean of " << x << " and " << y
                 << " is " << z << endl;
            z = gmean(x, y);
            cout << "Geometric mean of " << x << " and " << y
                 << " is " << z << endl;
            cout << "Enter next set of numbers <q to quit>:";
        }// end of try block
        catch (unexpexcted_mean &bg) {
            if (typeid(bg) == typeid(bad_hmean)) {
                auto *ph = dynamic_cast<bad_hmean *>(&bg);
                ph->mesg();
            } else if (typeid(bg) == typeid(bad_gmean)) {
                auto *pg = dynamic_cast<bad_gmean *>(&bg);
                pg->mesg();
                cout << "Sorry, you don't get to play any more.\n";
                break;
            }
            cout << "Try again.\n";
            continue;
        }
    }
    cout << "Bye!\n";
    return 0;
}

double hmean(double a, double b) {
    if (a == -b)
        throw bad_hmean(a, b);
    return 2.0 * a * b / (a + b);
}

double gmean(double a, double b) {
    if (a < 0 || b < 0)
        throw bad_gmean(a, b);
    return std::sqrt(a * b);
}
