#pragma once
#include<iostream>
#include "Client.h"
#include "Employee.h"
#include "Admin.h"
using namespace std;
class DataSourceInterface
{
public:
	virtual void addClient(Client c) = 0;
	virtual void addAdmin(Admin a) = 0;
	virtual void addEmployee(Employee e) = 0;
	virtual void getAllClients() = 0;
	virtual void getAllEmployees() = 0;
	virtual void getAdmin() = 0;
	virtual void removeAllClients() = 0;
	virtual void removeAllEmployees() = 0;
	virtual void removeAdmin() = 0;
};

