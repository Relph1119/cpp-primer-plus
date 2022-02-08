//
// Created by HRF on 2022/2/8.
//
#include <iostream>
#include <cctype>  // or ctype.h
#include "stack.h"

using namespace std;

int main() {
    Stack st; // create an empty stack
    customer cust{};

    double sum_payment = 0;
    char ch;
    cout << "Please enter A to add a purchase order,\n"
         << "P to process a PO, or Q to quit.\n";
    while (cin >> ch && toupper(ch) != 'Q') {
        while (cin.get() != '\n')
            continue;
        if (!isalpha(ch)) {
            cout << '\a';
            continue;
        }
        switch (ch) {
            case 'A':
            case 'a':
                cout << "Please input a customer's name:";
                cin.getline(cust.fullname, 35);
                cout << "Please input a customer's payment:";
                cin >> cust.payment;
                cin.get();
                if (st.isfull())
                    cout << "stack already full\n";
                else
                    st.push(cust);
                break;
            case 'P':
            case 'p':
                if (st.isempty())
                    cout << "stack already empty\n";
                else {
                    st.pop(cust);
                    sum_payment += cust.payment;
                    cout << "PO #" << cust.fullname << " popped\n";
                    cout << "Sum of payments:" << sum_payment << endl;
                }
                break;
        }
        cout << "Please enter A to add a purchase order,\n"
             << "P to process a PO, or Q to quit.\n";
    }
    cout << "Bye\n";
    return 0;
}
