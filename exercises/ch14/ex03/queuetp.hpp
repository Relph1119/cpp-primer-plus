//
// Created by HRF on 2022/2/17.
//
#ifndef QUEUETP_H
#define QUEUETP_H

#include <iostream>
#include <string>

using namespace std;

class Worker {
private:
    string fullname;
    long id;
protected:
    void Data() const;

    void Get();

public:
    Worker() : fullname("no one"), id(0L) {}

    Worker(string s, long n) : fullname(std::move(s)), id(n) {}

    ~Worker() = default;

    void Set();

    void Show() const;
};

template<class T>
class QueueTp {
private:
    enum {
        Q_SIZE = 10
    };
    struct Node {
        T item;
        Node *next;
    };
    Node *front;
    Node *rear;
    int items = 0;
    const int qsize;

    QueueTp(const QueueTp &q) : qsize(0) {};

    QueueTp &operator=(const QueueTp &q) { return *this; }

public:
    QueueTp(int qs = Q_SIZE);

    ~QueueTp();

    bool isempty() const;

    bool isfull() const;

    int queuecount() const;

    bool enqueue(const T &item);

    bool dequeue(T &item);
};

using namespace std;

void Worker::Set() {
    cout << "Please input worker's name:";
    getline(cin, fullname);
    cout << "Please input worker's ID:";
    cin >> id;
    while (cin.get() != '\n')
        continue;
}

void Worker::Show() const {
    cout << "Name: " << fullname << endl;
    cout << "Employee ID: " << id << endl;
}

template<class T>
QueueTp<T>::QueueTp(int qs) : qsize(qs) {
    front = rear = nullptr;
    items = 0;
}

template<class T>
QueueTp<T>::~QueueTp() {
    Node *temp;
    while (front != nullptr) {
        temp = front;
        front = front->next;
        delete temp;
    }
}

template<class T>
bool QueueTp<T>::isempty() const {
    return items == 0;
}

template<class T>
bool QueueTp<T>::isfull() const {
    return items == qsize;
}

template<class T>
int QueueTp<T>::queuecount() const {
    return items;
}

template<class T>
bool QueueTp<T>::enqueue(const T &item) {
    if (isfull())
        return false;
    Node *add = new Node;
    add->item = item;
    add->next = nullptr;
    items++;
    if (front == nullptr) {
        front = add;
    } else {
        rear->next = add;
    }
    rear = add;
    return true;
}

template<class T>
bool QueueTp<T>::dequeue(T &item) {
    if (isempty()) {
        return false;
    }
    item = front->item;
    items--;
    Node *temp = front;
    front = front->next;
    delete temp;
    if (items == 0) {
        rear = nullptr;
    }
    return true;
}

#endif //QUEUETP_H
