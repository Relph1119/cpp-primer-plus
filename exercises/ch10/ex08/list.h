//
// Created by HRF on 2022/2/8.
//
#ifndef LIST_H
#define LIST_H

typedef unsigned long Item;

void visitItem(Item &item);

class List {
private:
    enum {
        MAX = 10
    };
    Item items[MAX];
    int top;
public:
    List();

    bool isempyt() const;

    bool isfull() const;

    bool add(const Item &item);

    void visit(void (*pf)(Item &));
};

#endif //LIST_H
