//
// Created by HRF on 2022/2/2.
//
#include <cstring>
#include <iostream>

using namespace std;

const int LEN = 20;
const char QUIT_WORD[] = "done";

int main() {
    int word_count = 0;
    char words[LEN];

    cout << "Enter words (to stop, type the word done):" << endl;
    while (strcmp(QUIT_WORD, words) != 0) {
        word_count++;
        cin >> words;
        cin.get();
    }

    cout << "You entered a total of " << word_count - 1 << " words." << endl;
    return 0;
}
