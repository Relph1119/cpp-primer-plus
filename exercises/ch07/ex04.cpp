//
// Created by HRF on 2022/2/5.
//
#include "iostream"

using namespace std;

long double probability(unsigned numbers, unsigned picks);

int main() {
    int field_number, special_number, choices;
    cout << "Enter the field number of choices and\n"
            "the number of picks allowed:\n";
    cin >> field_number >> choices;
    long double field_prob = probability(field_number, choices);
    cout << "The field number, you have one chance in " << field_prob << " of winning.\n";

    cout << "Enter the special number of choices and\n"
            "the number of picks allowed:\n";
    cin >> special_number >> choices;
    long double special_prob = probability(special_number, choices);
    cout << "The special number, you have one chance in " << special_prob << " of winning.\n";

    cout << "The first prize, you have one chance in " << field_prob * special_prob << " of winning.\n";
    return 0;
}

// the following function calculates the probability of picking picks
// numbers correctly from numbers choices
long double probability(unsigned numbers, unsigned picks) {
    long double result = 1.0;  // here come some local variables
    long double n;
    unsigned p;

    for (n = numbers, p = picks; p > 0; n--, p--)
        result = result * n / p;
    return result;
}
