//
// Created by HRF on 2022/2/16.
//

#ifndef WINEC_H
#define WINEC_H

#include <iostream>
#include <cstring>
#include <valarray>

using namespace std;

template<class T1, class T2>
class Pair;

typedef valarray<int> ArrayInt;
typedef Pair<ArrayInt, ArrayInt> PairArray;

template<class T1, class T2>
class Pair {
private:
    T1 a;
    T2 b;
public:
    T1 &first();
    T2 &second();
    T1 first() const { return a; }
    T2 second() const { return b; }
    Pair(const T1 &aval, const T2 &bval) : a(aval), b(bval) {}
    Pair() = default;
};

class Wine {
private:
    string label;
    PairArray info;
    int year;
public:
    Wine(const char * l, int y, const int yr[], const int bot[]);
    Wine(const char * l, int y);
    void GetBottles();
    const string & Label() const;
    int sum() const;
    void Show();
};

#endif //WINEC_H
