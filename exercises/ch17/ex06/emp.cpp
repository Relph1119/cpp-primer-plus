//
// Created by HRF on 2022/3/2.
//
#include "emp.h"

abstr_emp::abstr_emp() : lname("none"), fname("none"), job("none") {}

abstr_emp::abstr_emp(const string &fn, const string &ln, const string &j)
        : fname(fn), lname(ln), job(j) {}

abstr_emp::~abstr_emp() = default;

void abstr_emp::ShowAll() const {
    cout << "Name: " << fname << " " << lname << endl;
    cout << "Job Title: " << job << endl;
}

void abstr_emp::SetAll() {
    cout << "Please input the first name:";
    getline(cin, fname);
    cout << "Please input the last name:";
    getline(cin, lname);
    cout << "Please input the job title:";
    getline(cin, job);
}

ostream &operator<<(ostream &os, const abstr_emp &e) {
    os << "Name: " << e.fname << " " << e.lname << endl;
    os << "Job Title: " << e.job << endl;
    return os;
}

void abstr_emp::writeall(ofstream &fout) const {
    fout << fname << endl;
    fout << lname << endl;
    fout << job << endl;
}

void abstr_emp::getall(ifstream &fin) {
    getline(fin, fname);
    getline(fin, lname);
    getline(fin, job);
}

employee::employee() : abstr_emp() {}

employee::employee(const string &fn, const string &ln, const string &j)
        : abstr_emp(fn, ln, j) {}

void employee::ShowAll() const {
    abstr_emp::ShowAll();
}

void employee::SetAll() {
    abstr_emp::SetAll();
}

void employee::writeall(ofstream &fout) const {
    abstr_emp::writeall(fout);
}

void employee::getall(ifstream &fin) {
    abstr_emp::getall(fin);
}

manager::manager() : abstr_emp(), inchargeof(0) {}

manager::manager(const string &fn, const string &ln, const string &j, int ico)
        : abstr_emp(fn, ln, j), inchargeof(ico) {}

manager::manager(const abstr_emp &e, int ico) : abstr_emp(e) {
    inchargeof = ico;
}

manager::manager(const manager &m) : abstr_emp(m) {
    inchargeof = m.inchargeof;
}

void manager::ShowAll() const {
    abstr_emp::ShowAll();
    cout << "In charge of: " << inchargeof << endl;
}

void manager::SetAll() {
    abstr_emp::SetAll();
    cout << "Please input the number of in charge:";
    cin >> inchargeof;
    while (cin.get() != '\n')
        continue;
}

void manager::writeall(ofstream &fout) const {
    abstr_emp::writeall(fout);
    fout << inchargeof << endl;
}

void manager::getall(ifstream &fin) {
    abstr_emp::getall(fin);
    fin >> inchargeof;
    fin.get();
}

fink::fink() : abstr_emp(), reportsto("none") {}

fink::fink(const string &fn, const string &ln,
           const string &j, const string &rpo) : abstr_emp(fn, ln, j), reportsto(rpo) {}

fink::fink(const abstr_emp &e, const string &rpo) : abstr_emp(e), reportsto(rpo) {}

fink::fink(const fink &e) : abstr_emp(e) {
    reportsto = e.reportsto;
}

void fink::ShowAll() const {
    abstr_emp::ShowAll();
    cout << "REPORT TO: " << reportsto << endl;
}

void fink::SetAll() {
    abstr_emp::SetAll();
    cout << "Please input the reports to whom:";
    getline(cin, reportsto);
}

void fink::writeall(ofstream &fout) const {
    abstr_emp::writeall(fout);
    fout << reportsto << endl;
}

void fink::getall(ifstream &fin) {
    abstr_emp::getall(fin);
    getline(fin, reportsto);
}

highfink::highfink() : abstr_emp(), manager(), fink() {};

highfink::highfink(const string &fn, const string &ln, const string &j, const string &rpo, int ico)
        : abstr_emp(fn, ln, j), manager(fn, ln, j, ico), fink(fn, ln, j, rpo) {}

highfink::highfink(const abstr_emp &e, const string &rpo, int ico)
        : abstr_emp(e), manager(e, ico), fink(e, rpo) {}

highfink::highfink(const fink &f, int ico)
        : abstr_emp(f), fink(f), manager(f, ico) {}

highfink::highfink(const manager &m, const string &rpo)
        : abstr_emp(m), manager(m), fink(m, rpo) {}

highfink::highfink(const highfink &h) : abstr_emp(h), manager(h), fink(h) {}

void highfink::ShowAll() const {
    manager::ShowAll();
    cout << "Reportsto: " << ReportsTo() << endl;
}

void highfink::SetAll() {
    manager::SetAll();
    cout << "Please input the reportsto:";
    getline(cin, fink::ReportsTo());
}

void highfink::writeall(ofstream &fout) const {
    manager::writeall(fout);
    fout << fink::ReportsTo() << endl;
}

void highfink::getall(ifstream &fin) {
    manager::getall(fin);
    getline(fin, fink::ReportsTo());
}