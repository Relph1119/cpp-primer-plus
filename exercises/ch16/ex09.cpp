//
// Created by HRF on 2022/3/1.
//
#include <iostream>
#include <ctime>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;

void calc_process_time(int length);

int main() {
    int nums[] = {100000, 1000000, 10000000};
    for (int len : nums) {
        cout << "=====Test " << len << " elements=====" << endl;
        calc_process_time(len);
        cout << endl;
    }

    return 0;
}

void calc_process_time(int length) {
    vector<int> vi0;
    srand(time(0));

    for (int i = 0; i < length; i++) {
        vi0.push_back(rand() % 1000);
    }

    vector<int> vi(vi0);
    list<int> li(vi0.begin(), vi0.end());

    clock_t start = clock();
    sort(vi.begin(), vi.end());
    clock_t end = clock();
    cout << "Time used sort by vector.sort(): ";
    cout << (double) (end - start) / CLOCKS_PER_SEC << " seconds" << endl;

    start = clock();
    li.sort();
    end = clock();
    cout << "Time used sort by list.sort(): ";
    cout << (double) (end - start) / CLOCKS_PER_SEC << " seconds" << endl;

    li.assign(vi0.begin(), vi0.end());
    start = clock();
    vi.assign(li.begin(), li.end());
    sort(vi.begin(), vi.end());
    li.assign(vi.begin(), vi.end());
    end = clock();
    cout << "Time used sort by generic sort: ";
    cout << (double) (end - start) / CLOCKS_PER_SEC << " seconds" << endl;
}