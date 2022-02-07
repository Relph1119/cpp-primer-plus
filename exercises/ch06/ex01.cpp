//
// Created by HRF on 2022/2/3.
//
#include <iostream>
#include <cctype>

using namespace std;

int main() {
    char word;

    cout << "Please input the character:" << endl;
    cin.get(word);
    while(word != '@') {
        if (islower(word)) {
            word = toupper(word);
        } else if (isupper(word)) {
            word = tolower(word);
        }
        cout << word;
        cin.get(word);
    }

    cout << "\nBye." << endl;
    return 0;
}