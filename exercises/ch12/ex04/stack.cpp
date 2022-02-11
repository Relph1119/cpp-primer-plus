// stack.cpp -- Stack member functions
#include "stack.h"

Stack::Stack(int n)    // create an empty stack
{
    pitems = new Item[n];
    size = n;
    top = 0;
}

Stack::Stack(const Stack &st) {
    pitems = new Item[st.size];
    for (int i = 0; i < st.top; i++) {
        pitems[i] = st.pitems[i];
    }
    size = st.size;
    top = st.top;
}

Stack::~Stack() {
    delete[] pitems;
}

bool Stack::isempty() const {
    return top == 0;
}

bool Stack::isfull() const {
    return top == size;
}

bool Stack::push(const Item &item) {
    if (!isfull()) {
        pitems[top++] = item;
        return true;
    } else {
        return false;
    }
}

bool Stack::pop(Item &item) {
    if (!isempty()) {
        item = pitems[--top];
        return true;
    } else
        return false;
}

Stack &Stack::operator=(const Stack &st) {
    if (this == &st) {
        return *this;
    }
    pitems = new Item[st.size];
    for (int i = 0; i < size; i++) {
        pitems[i] = st.pitems[i];
    }
    size = st.size;
    top = st.top;
    return *this;
}