//
// Created by HRF on 2022/2/17.
//
#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <cstring>
#include <ctime>

using namespace std;

class Person {
private:
    string first_name;
    string last_name;
public:
    Person() : first_name("no name"), last_name("no name") {};

    Person(string f, string l) : first_name(f), last_name(l) {};

    virtual ~Person() = default;

    virtual void Show() const;
};

class Gunslinger : virtual public Person {
private:
    int nick;
public:
    Gunslinger(string f, string l, int n) : Person(f, l), nick(n) {};

    ~Gunslinger() override = default;

    virtual double Draw() const;

    void Show() const override;
};

struct Card {
    enum SUITE {
        SPADE, HEART, DIAMOND, CLUB
    };
    SUITE suite;
    int number;
};

class PokerPlayer : virtual public Person {
public:
    PokerPlayer(string f, string l) : Person(f, l) {};

    ~PokerPlayer() override = default;

    virtual Card Draw() const;
};

class BadDude : public PokerPlayer, public Gunslinger {
public:
    BadDude(string f, string l, int n)
            : Person(f, l), PokerPlayer(f, l),
              Gunslinger(f, l, n) {};

    double Gdraw() const;

    Card Cdraw() const;

    void Show() const override;


};

void Person::Show() const {
    cout << first_name << ", " << last_name << endl;
}

double Gunslinger::Draw() const {
    srand(time(0));
    return rand() % 60;
}

void Gunslinger::Show() const {
    Person::Show();
    cout << "Nick: " << nick << endl;
}

Card PokerPlayer::Draw() const {
    Card card;
    srand(time(0));
    card.number = rand() % 13;
    card.suite = Card::SUITE(rand() % 4);
    return card;
}

double BadDude::Gdraw() const {
    return Gunslinger::Draw();
}

Card BadDude::Cdraw() const {
    Card card = PokerPlayer::Draw();
    if (card.number == 13) {
        card.number = 1;
        if (card.suite != Card::SUITE(3)) {
            card.suite = Card::SUITE(int(card.suite) + 1);
        } else {
            card.suite = Card::SUITE(0);
        }
    } else {
        card.number += 1;
    }

    return card;
}

const string suites[4] = {"SPADE", "HEART", "DIAMOND", "CLUB"};

void BadDude::Show() const {
    Gunslinger::Show();
    Card card = PokerPlayer::Draw();
    cout << "Poke: " << suites[card.suite] << " " << card.number << endl;
}

#endif //PERSON_H
