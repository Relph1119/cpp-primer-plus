//
// Created by HRF on 2022/2/11.
//
#include <iostream>
#include "stonewt.h"

using namespace std;

int main() {
    Stonewt incognito = 275;
    cout << "The celebrity weighed " << incognito << endl;
    Stonewt wolfe(285.7);
    cout << "The detective weighed " << wolfe << endl;
    Stonewt taft(21, 8);
    cout << "The President weighed " << taft << endl;

    incognito = 276.8;      // uses constructor for conversion
    taft = 325;             // same as taft = Stonewt(325);
    cout << "After dinner, the celebrity weighed " << incognito << endl;
    cout << "After dinner, the President weighed " << taft << endl;
    wolfe.set_style(Stonewt::FLOATPOUNDS);
    wolfe = wolfe * 2.3;
    cout << "The detective weighed " << wolfe << endl;
    return 0;
}