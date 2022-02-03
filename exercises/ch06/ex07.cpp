//
// Created by HRF on 2022/2/3.
//
#include <iostream>
#include <cstring>

using namespace std;

const int LEN = 40;

int main() {
    char words[LEN];
    int vowel_cnt = 0, consonant_cnt = 0, others_cnt = 0;

    cout << "Enter words (q to quit):" << endl;

    while (cin >> words && strcmp(words, "q") != 0) {
        if (!isalpha(words[0])) {
            others_cnt++;
        } else {
            switch (words[0]) {
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                    vowel_cnt++;
                    break;
                default:
                    consonant_cnt++;
            }
        }
    }

    cout << vowel_cnt << " words beginning with vowels" << endl;
    cout << consonant_cnt << " words beginning with consonants" << endl;
    cout << others_cnt << " others" << endl;

    return 0;
}
