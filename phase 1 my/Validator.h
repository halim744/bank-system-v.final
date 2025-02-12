#pragma once
#include <iostream>
#include<string>
using namespace std;
class Validator {
public:
    Validator() {
    }
    static bool NameValidator(string name) {
        if (name.size() < 5) {
            cout << "Name is too short,try again!" << endl;
            return false;
        }
        if (name.size() > 20) {
            cout << "Name is too long,try again!" << endl;
            return false;
        }
        bool flag = 1;
        for (int i = 0; i < name.size(); i++) {
            if (!isalpha(name[i])) {
                flag = 0;
            }
        }
        if (flag)
            return true;
        else {
            cout << "Alphabetic characters only,try again!" << endl;
            return false;
        }
    }
    static bool PassValidator(string password) {
        if (password.size() < 8) {
            cout << "Password is too short,try again!" << endl;
            return false;
        }
        if (password.size() > 20) {
            cout << "Password is too long,try again!" << endl;
            return false;
        }
        return true;
    }
    static bool BalanceValidator(int balance) {
        if (balance < 1500) {
            cout << "Balance isn't enough to create an account,try again!" << endl;
            return false;
        }
        return true;
    }
    static bool SalaryValidator(int balance) {
        if (balance < 5000) {
            cout << "Salary isn't enough to create an account,try again!" << endl;
            return false;
        }
        return true;
    }

    static bool IdLogin(int id, int ids[]) {
        for (int i = 0; i < 5; i++) {
            if (id == ids[i])
                return true;
        }
        return false;
    }
    static bool PassLogin(string password, string passwords[]) {
        for (int i = 0; i < 5; i++) {
            if (password == passwords[i])
                return true;
        }
        return false;
    }
};
