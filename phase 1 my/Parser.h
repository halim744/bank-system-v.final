#pragma once
#include<iostream>
#include<vector>
#include <string>
#include "Client.h"
#include "Employee.h"
#include "Admin.h"
using namespace std;
class Parser
{
public:
	static vector<string> split(string line) {

	}
	static Client parseToClient(string x){
		string d;
		string name;
		string password;
		string b;
		int i{};
		for (i;i < x.size() && i != '#';i++) {
			d[i] = x[i];
			i++;
		}
		for (i;i < x.size() && i != '#';i++) {
			name[i] = x[i];
			i++;
		}
		for (i;i < x.size() && i != '#';i++) {
			password[i] = x[i];
			i++;
		}
		for (i;i < x.size() && i != '#';i++) {
			b[i] = x[i];
			i++;
		}
		double balance = stod(b);
		int id = 0;
		Client c(name, password, id, balance);
		return c;
	}
	static Employee parseToEmployee(string x) {
	}
	static Admin parseToAdmin(string x) {
	}
};

