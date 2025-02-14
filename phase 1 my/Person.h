
#pragma once
#include <iostream>
#include<string>
#include"Validator.h"
using namespace std;
class Person {
protected:
	string name, password;
	int id;

public:
	Person() {
		this->id = 0;
	}
	Person(string name, string password, int id) {
		this->id = id;

		if (Validator::NameValidator(name)) {
			this->name = name;
		}
		else {
			cout << "name must be min size 5 and  max size 20  \n";
			return;
		}
		if (Validator::PassValidator(password)) {
			this->password = password;
		}
		else {
			cout << "sorry password must be with min size 8 and max size 20 \n";
		}

	}
	void setname(string name) {
		if (Validator::NameValidator(name)) {
			this->name = name;
		}
		else {
			cout << "name must be min size 5 and  max size 20  \n";
			return;
		}

	}
	void setpassword(string password) {
		if (Validator::PassValidator(password)) {
			this->password = password;
		}
		else {
			cout << "sorry password must be with min size 8 and max size 20 \n";
		}
	}
	void setid(int id) {
		this->id = id;
	}

	string getname() {
		return this->name;
	}
	string getpassword() {
		return this->password;
	}
	int getid() {
		return this->id;
	}

	void display() {
		cout << "name = " << name << endl;
		cout << "id = " << id << endl;
		cout << "password = " << password << endl;

	}
	~Person() {

	}
};
