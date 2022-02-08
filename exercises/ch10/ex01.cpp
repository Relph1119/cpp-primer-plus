//
// Created by HRF on 2022/2/8.
//
#include <iostream>

using namespace std;

class BankAccount {
private:
    string name;
    string account;
    double deposit;
public:
    BankAccount();
    BankAccount(const string &, const string &, float);
    ~BankAccount();
    void create_account(const string &, const string &, float);
    void show() const;
    void save_deposit(float);
    void withdraw_deposit(float);
};

BankAccount::BankAccount() {
    deposit = 0;
}

BankAccount::BankAccount(const string &name_, const string &account_, float deposit_) {
    name = name_;
    account = account_;
    deposit = deposit_;
}

BankAccount::~BankAccount() = default;

void BankAccount::create_account(const string &name_, const string &account_, float deposit_) {
    if (!name_.empty()) {
        name = name_;
    }
    if (!account_.empty()) {
        account = account_;
    }
    deposit = deposit_;
}

void BankAccount::show() const {
    cout << "=====The Account Information=====\n";
    cout << "Name: " << name << endl;
    cout << "Account ID: " << account << endl;
    cout << "Deposit: " << deposit << endl;
}

void BankAccount::save_deposit(float f) {
    deposit += f;
}

void BankAccount::withdraw_deposit(float f) {
    deposit -= f;
}

int main() {
    BankAccount bankAccount("Nik", "0001", 1200);
    bankAccount.show();
    bankAccount.create_account("Nik Swit", "", 1500);
    bankAccount.show();
    bankAccount.save_deposit(223.5);
    bankAccount.show();
    return 0;
}