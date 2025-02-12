#pragma once
#include <iostream>
#include<string>
#include"Person.h"
using namespace std;
class Client : public Person {
	double balance;
public:
	Client() {
		this->balance = 0;
	}

	Client(string name, string password, int id, double balance) : Person(name, password, id) {
		if (Validator::BalanceValidator(balance))
			this->balance = balance;
		else {
			cout << "soory Min balance is 1500 \n";
		}
		this->balance = balance;
	}
	void setbalance(double balance) {
		if (Validator::BalanceValidator(balance))
			this->balance = balance;
		else {
			cout << "soory Min balance is 1500 \n";
		}

	}
	double getbalance() {
		return this->balance;
	}
	void deposit(double amount) {
		this->balance += amount;
		cout << "deposit = " << amount << " balance after deposit = " << balance << endl;
	}
	void withdraw(double amount) {
		if (amount > balance) {
			cout << " sorry not enough \n ";
			return;
		}
		else {
			this->balance -= amount;
			cout << "withdraw = " << amount << " balance after transfer = " << balance << endl;
		}
	}
	void  transferTo(Client& c, double amount) {
		if (amount > balance) {
			cout << " sorry not enough \n ";
			return;
		}
		else {
			this->balance -= amount;
			c.deposit(amount);
			cout << "transfer = " << amount << " balance after withdraw = " << balance << endl;
		}

	}
	void checkBalance() {
		cout << "balance = " << balance << endl; ;
	}
	void display() {
		Person::display();
		cout << "balance = " << balance << endl;

	}
	~Client() {

	}

};
