//
// Created by HRF on 2022/2/18.
//
#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>

using namespace std;

void ShowStr(const string &str);

void GetStrs(ifstream &fin, vector<string> &v);

class Store {
private:
    string str;
    ofstream *fout;
public:
    Store(ofstream &out) : fout(&out) {}

    bool operator()(const string &str);

    ~Store() {}
};

bool Store::operator()(const string &str) {
    unsigned int len = str.length();
    if (fout->is_open()) {
        fout->write((char *) &len, sizeof len);
        fout->write(str.data(), len);
        return true;
    } else {
        return false;
    }
}

// input
// It was a dark and stormy day, and
// the full moon glowed brilliantly.
int main() {
    using namespace std;
    vector<string> vostr;
    string temp;

    // acquire strings
    cout << "Enter strings (empty line to quit):\n";
    while (getline(cin, temp) && temp[0] != '\0')
        vostr.push_back(temp);
    cout << "Here is your input.\n";
    for_each(vostr.begin(), vostr.end(), ShowStr);
    // store in a file
    ofstream fout("files/strings.dat", ios_base::out | ios_base::binary);
    for_each(vostr.begin(), vostr.end(), Store(fout));
    fout.close();

    // recover file contents
    vector<string> vistr;
    ifstream fin("files/strings.dat", ios_base::in | ios_base::binary);
    if (!fin.is_open()) {
        cerr << "Could not open file for input.\n";
        exit(EXIT_FAILURE);
    }
    GetStrs(fin, vistr);
    cout << "\nHere are the strings read from the file:\n";
    for_each(vistr.begin(), vistr.end(), ShowStr);

    return 0;
}

void ShowStr(const string &str) {
    cout << str << endl;
}

void GetStrs(ifstream &fin, vector<string> &v) {
    unsigned int len;
    char *p;
    while (fin.read((char *) &len, sizeof len)) {
        p = new char[len];
        fin.read(p, len);
        v.push_back(p);
    }
}