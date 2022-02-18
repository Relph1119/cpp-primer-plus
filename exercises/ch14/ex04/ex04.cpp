//
// Created by HRF on 2022/2/17.
//
#include "person.hpp"

using namespace std;

int main() {
    Person person("Jakey", "Slong");
    cout << "Person: ";
    person.Show();
    cout << endl;

    Gunslinger gl("Tidy", "White", 12);
    cout << "Gunslinger: ";
    gl.Show();
    cout << "Gunslinger's nick is " << gl.Draw() << endl;
    cout << endl;

    PokerPlayer pokerPlayer("Sinclair", "Parma");
    cout << "PokerPlayer: ";
    pokerPlayer.Show();
    cout << endl;

    BadDude badDude = BadDude("Natasha", "Gargalova", 13);
    cout << "BadDudu: ";
    badDude.Show();
    Card card = badDude.Cdraw();
    cout << "After draw, Poke is " << suites[card.suite] << " " << card.number << endl;

    return 0;
}