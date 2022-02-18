//
// Created by HRF on 2022/2/16.
//
#include <iostream>
#include <string>

class abstr_emp {
private:
    string fname; // abstr_emp's first name
    string lname; // abstr_emp's last name
    string job;
public:
    abstr_emp();

    abstr_emp(const string &fn, const string &ln,
              const string &j);

    virtual void ShowAll() const; // labels and shows all data
    virtual void SetAll(); // prompts user for values
    friend ostream &operator<<(ostream &os, const abstr_emp &e);

    // just displays first and last name
    virtual ~abstr_emp() = 0; // virtual base class
};

class employee : public abstr_emp {
public:
    employee();

    employee(const string &fn, const string &ln,
             const string &j);

    void ShowAll() const override;

    virtual void SetAll();
};

class manager : virtual public abstr_emp {
private:
    int inchargeof; // number of abstr_emps managed
protected:
    int InChargeOf() const { return inchargeof; } // output
    int &InChargeOf() { return inchargeof; } // input
public:
    manager();

    manager(const string &fn, const string &ln,
            const string &j, int ico = 0);

    manager(const abstr_emp &e, int ico);

    manager(const manager &m);

    virtual void ShowAll() const;

    virtual void SetAll();
};

class fink : virtual public abstr_emp {
private:
    string reportsto; // to whom fink reports
protected:
    string ReportsTo() const { return reportsto; }

    string &ReportsTo() { return reportsto; }

public:
    fink();

    fink(const string &fn, const string &ln,
         const string &j, const string &rpo);

    fink(const abstr_emp &e, const string &rpo);

    fink(const fink &e);

    virtual void ShowAll() const;

    virtual void SetAll();
};

class highfink : public manager, public fink // management fink
{
public:
    highfink();

    highfink(const string &fn, const string &ln,
             const string &j, const string &rpo, int ico);

    highfink(const abstr_emp &e, const string &rpo, int ico);

    highfink(const fink &f, int ico);

    highfink(const manager &m, const string &rpo);

    highfink(const highfink &h);

    virtual void ShowAll() const;

    virtual void SetAll();
};

abstr_emp::abstr_emp() : lname("none"), fname("none"), job("none") {}

abstr_emp::abstr_emp(const string &fn, const string &ln, const string &j)
        : fname(fn), lname(ln), job(j) {}

abstr_emp::~abstr_emp() = default;

void abstr_emp::ShowAll() const {
    cout << "Name: " << fname << " " << lname << endl;
    cout << "Job Title: " << job << endl;
}

void abstr_emp::SetAll() {
    cout << "Please input the first name: ";
    getline(cin, fname);
    cout << "Please input the last name: ";
    getline(cin, lname);
    cout << "Please input the job title: ";
    getline(cin, job);
}

ostream &operator<<(ostream &os, const abstr_emp &e) {
    os << "Name: " << e.fname << " " << e.lname << endl;
    os << "Job Title: " << e.job << endl;
    return os;
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

manager::manager() {}

fink::fink() : abstr_emp(), reportsto("none") {
}

fink::fink(const string &fn, const string &ln,
           const string &j, const string &rpo) : abstr_emp(fn, ln, j), reportsto(rpo) {
}

fink::fink(const abstr_emp &e, const string &rpo) : abstr_emp(e), reportsto(rpo) {
}

fink::fink(const fink &e) : abstr_emp(e) {
    reportsto = e.reportsto;
}

void fink::ShowAll() const {
    abstr_emp::ShowAll();
    cout << "REPORT TO: " << reportsto << endl;
}

void fink::SetAll() {
    abstr_emp::SetAll();
    cout << "Enter the reports to whom: ";
    getline(cin, reportsto);
}

highfink::highfink() {};

highfink::highfink(const string &fn, const string &ln,
                   const string &j, const string &rpo, int ico) :
        abstr_emp(fn, ln, j), manager(fn, ln, j, ico), fink(fn, ln, j, rpo) {
}

highfink::highfink(const abstr_emp &e, const string &rpo, int ico) :
        abstr_emp(e), manager(e, ico), fink(e, rpo) {
}

highfink::highfink(const fink &f, int ico) :
        abstr_emp(f), fink(f), manager(f, ico) {
}

highfink::highfink(const manager &m, const string &rpo) :
        abstr_emp(m), manager(m), fink(m, rpo) {
}

highfink::highfink(const highfink &h) : abstr_emp(h), manager(h), fink(h) {}

void highfink::ShowAll() const {
    manager::ShowAll();
    cout << "Reportsto: " << ReportsTo() << endl;
    cout << endl;
}

void highfink::SetAll() {
    manager::SetAll();
    cout << "Enter the reportsto: ";
    getline(cin, fink::ReportsTo());
}