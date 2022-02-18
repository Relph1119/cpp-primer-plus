//
// Created by HRF on 2022/2/18.
//

#ifndef RQ1_H
#define RQ1_H

#include <cstring>

class RQ1 {
private:
    char *st; // points to c-style string
public:
    RQ1() {
        st = new char[1];
        strcpy(st, "");
    }

    RQ1(const char *s) {
        st = new char[strlen(s) + 1];
        strcpy(st, s);
    }

    RQ1(const RQ1 &rq) {
        st = new char[strlen(rq.st) + 1];
        strcpy(st, rq.st);
    }

    ~RQ1() {
        delete[] st;
    }

    RQ &operator=(const RQ &rq);
};

#endif //RQ1_H
