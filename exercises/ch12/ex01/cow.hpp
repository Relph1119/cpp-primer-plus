#ifndef COW_H_
#define COW_H_

class Cow {
    char name[20]{};
    char *hobby;
    double weight;
public:
    Cow();

    Cow(const char *nm, const char *ho, double wt);

    Cow(const Cow &c);

    ~Cow();

    Cow &operator=(const Cow &c);

    void ShowCow() const;             //display all cow data
};

#endif

#include <cstring>
#include <iostream>
using namespace std;

Cow::Cow() {
    name[0] = '\0';
    hobby = nullptr;
    weight = 0.0;
}

Cow::Cow(const char *nm, const char *ho, double wt) {
    strncpy(name, nm, 20);
    if (strlen(nm) > 20) {
        name[19] = '\0';
    } else {
        name[strlen(nm)] = '\0';
    }

    hobby = new char[strlen(ho) + 1];
    strcpy(hobby, ho);
    weight = wt;
}

Cow::Cow(const Cow &c) {
    strcpy(name, c.name);
    hobby = new char[strlen(c.hobby) + 1];
    strcpy(hobby, c.hobby);
    weight = c.weight;
}

Cow::~Cow() {
   delete [] hobby;
}

Cow &Cow::operator=(const Cow &c) {
    if (this == &c) {
        return *this;
    }
    delete [] hobby;
    hobby = new char[strlen(c.hobby) + 1];
    strcpy(name, c.name);
    strcpy(hobby, c.hobby);
    weight = c.weight;
    return *this;
}

void Cow::ShowCow() const {
    if (hobby == nullptr) {
        cout << "This Cow's information is empty!\n";
    } else {
        cout << "=====Cow's information=====\n";
        cout << "Name: " << name << endl;
        cout << "Hobby: " << hobby << endl;
        cout << "Weight: " << weight << endl;
    }
}


