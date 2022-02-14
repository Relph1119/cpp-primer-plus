// usebrass2.cpp -- polymorphic example
// compile with brass.cpp
#include <iostream>
#include <string>
#include "dma.h"

const int CLIENTS = 4;

int main() {
    using std::cin;
    using std::cout;
    using std::endl;

    ABC *p_clients[CLIENTS];
    char kind;

    for (auto &p_client : p_clients) {
        cout << "Enter 1 for ABC or "
             << "2 for baseDMA or "
             << "3 for lacksDMA or "
             << "4 for hasDMA:";
        while (cin >> kind && (kind != '1' && kind != '2' && kind != '3' && kind != '4')) {
            cout << "Enter either 1 or 2 or 3 or 4:";
        }
        switch (kind) {
            case '1':
                p_client = new ABC();
                break;
            case '2':
                while (cin.get() != '\n')
                    continue;
                char label[40];
                int rating;
                cout << "Please input baseDMA's label:";
                cin.getline(label, 40);
                cout << "Please input baseDMA's rating:";
                cin >> rating;
                p_client = new baseDMA(label, rating);
                break;
            case '3':
                while (cin.get() != '\n')
                    continue;
                char color[40];
                cout << "Please input lacksDMA's label:";
                cin.getline(label, 40);
                cout << "Please input lacksDMA's color:";
                cin.getline(color, 40);
                cout << "Please input lacksDMA's rating:";
                cin >> rating;
                p_client = new lacksDMA(color, label, rating);
                break;
            case '4':
                while (cin.get() != '\n')
                    continue;
                char style[40];
                cout << "Please input hasDMA's label:";
                cin.getline(label, 40);
                cout << "Please input hasDMA's style:";
                cin.getline(style, 40);
                cout << "Please input hasDMA;s rating:";
                cin >> rating;
                p_client = new hasDMA(style, label, rating);
                break;
            default:;
        }
        while (cin.get() != '\n')
            continue;
    }

    cout << endl;
    for (auto &p_client : p_clients) {
        p_client->View();
        cout << endl;
    }

    for (auto &p_client : p_clients) {
        delete p_client;  // free memory
    }
    cout << "Done.\n";
    return 0;
}
