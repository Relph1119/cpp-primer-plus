//
// Created by HRF on 2022/3/1.
//
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <memory>

using namespace std;

struct Review {
    string title;
    int rating;
    float price;
};

bool operator<(const shared_ptr<Review> &p1, const shared_ptr<Review> &p2);

bool worseThan(const shared_ptr<Review> &p1, const shared_ptr<Review> &p2);

bool expenThan(const shared_ptr<Review> &p1, const shared_ptr<Review> &p2);

void ShowReview(const shared_ptr<Review> &p);

bool FillReview(Review &rr);

void show_menu();

int main() {
    vector<shared_ptr<Review>> books;
    Review temp;
    while (FillReview(temp)) {
        shared_ptr<Review> pd(new Review(temp));
        books.push_back(pd);
    }
    if (!books.empty()) {
        show_menu();

        char choice;

        while (cin >> choice && choice != 'q') {
            switch (choice) {
                case 'o':
                    break;
                case 'a':
                    cout << "Sorted by alphabet:\n";
                    sort(books.begin(), books.end());
                    break;
                case 'r':
                    cout << "Sorted by rating:\n";
                    sort(books.begin(), books.end(), worseThan);
                    break;
                case 's':
                    cout << "Sorted by reverse rating:\n";
                    sort(books.rbegin(), books.rend(), worseThan);
                    break;
                case 'p':
                    cout << "Sorted by price:\n";
                    sort(books.begin(), books.end(), expenThan);
                    break;
                case 'd':
                    cout << "Sorted by reverse price:\n";
                    sort(books.rbegin(), books.rend(), expenThan);
                    break;
                default:;
            }
            cout << "Rating Book\n";
            for_each(books.begin(), books.end(), ShowReview);
            cout << endl;
            show_menu();
        }
    } else
        cout << "No entries. ";
    cout << "Bye.\n";
    return 0;
}

bool operator<(const shared_ptr<Review> &p1, const shared_ptr<Review> &p2) {
    if (p1->title < p2->title) {
        return true;
    } else if (p1->title == p2->title && p1->rating < p2->rating) {
        return true;
    } else if (p1->title == p2->title && p1->rating == p2->rating && p1->price < p2->price) {
        return true;
    } else {
        return false;
    }
}

bool worseThan(const shared_ptr<Review> &p1, const shared_ptr<Review> &p2) {
    if (p1->rating < p2->rating)
        return true;
    else
        return false;
}

bool expenThan(const shared_ptr<Review> &p1, const shared_ptr<Review> &p2) {
    if (p1->price < p2->price)
        return true;
    else
        return false;
}

bool FillReview(Review &rr) {
    cout << "Enter book title (quit to quit):";
    getline(cin, rr.title);
    if (rr.title == "quit" || rr.title.empty())
        return false;
    cout << "Enter book rating:";
    cin >> rr.rating;
    if (!cin)
        return false;
    cout << "Enter book price:";
    cin >> rr.price;
    if (!cin)
        return false;
    // get rid of rest of input line
    while (cin.get() != '\n')
        continue;
    return true;
}

void ShowReview(const shared_ptr<Review> &p) {
    cout << p->rating << "\t" << p->title << "\t" << p->price << endl;
}

void show_menu() {
    cout << "Please choose the way to sort: \n";
    cout << "o: original a: alphabet\n";
    cout << "r: rate     s: rate r\n";
    cout << "p: price    d: price r\n";
    cout << "q: quit\n";
}