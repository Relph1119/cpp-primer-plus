//
// Created by HRF on 2022/3/1.
//
#include <iostream>
#include <vector>
#include <ctime>
#include <algorithm>
#include <cstdlib>

using namespace std;

vector<int> Lotto(int dot, int srand_dot);

int main() {
    vector<int> winners;
    winners = Lotto(51, 6);
    vector<int>::iterator pd;
    cout << "winners: \n";
    for (pd = winners.begin(); pd != winners.end(); pd++) {
        cout << *pd << " ";
    }
    return 0;
}

vector<int> Lotto(int dot, int srand_dot) {
    vector<int> result, all_values;
    srand(time(0));
    for (int i = 0; i < srand_dot; i++) {
        for (int j = 0; j < dot; j++) {
            // 所有可能值
            all_values.push_back(rand() % dot);
        }
        // 打乱
        random_shuffle(all_values.begin(), all_values.end());
        result.push_back(*all_values.begin());
    }
    sort(result.begin(), result.end());
    return result;
}