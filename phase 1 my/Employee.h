#pragma once
#include <iostream>
#include<string>
#include"Person.h"
using namespace std;
class Employee :public Person {
protected:
	double salary;
public:
	Employee() {
		this->salary = 0;
	}

	Employee(string name, string password, int id, double salary) : Person(name, password, id) {
		if (Validator::SalaryValidator(salary))
			this->salary = salary;
		else {
			cout << "soory Min balance is 1500 \n";
		}
		this->salary = salary;
	}
	void setbalance(double salary) {
		if (Validator::SalaryValidator(salary))
			this->salary = salary;
		else {
			cout << "soory Min balance is 1500 \n";
		}

	}
	double getbalance() {
		return this->salary;
	}
	void display() {
		Person::display();
		cout << "salary = " << salary << endl;

	}
	~Employee() {

	}
};


