//
// Created by HRF on 2022/2/17.
//
#include <iostream>
#include "queuetp.hpp"

using namespace std;

const int SIZE = 3;

int main() {
    QueueTp<Worker> lolas(SIZE);

    for (int ct = 0; ct < SIZE; ct++) {
        Worker worker;
        worker.Set();
        lolas.enqueue(worker);
    }

    while (!lolas.isempty()) {
        cout << endl;
        Worker temp;
        lolas.dequeue(temp);
        temp.Show();
    }
    cout << "Bye." << endl;
    return 0;
}