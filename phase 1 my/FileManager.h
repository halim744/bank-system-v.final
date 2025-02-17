#pragma once
#include<iostream>
#include<fstream>
#include "Parser.h"
#include "Client.h"
#include "Employee.h"
#include "Admin.h"
using namespace std;
class FileManager
{
public:
void addClient(Client c) {
	ofstream Client("Client.txt", ios::app);

}
 void addAdmin(Admin a){}
 void addEmployee(Employee e){}
 void getAllClients(){

 }
 void getAllEmployees(){}
 void getAdmin(){

 }
 void removeAllClients(){
	 remove("Client.txt");
	 ofstream Client("Client.txt");
 }
 void removeAllEmployees(){
	 remove("Employee");
	 ofstream Employee("Employee.txt");
 }
 void removeAdmin() {
	 remove("Admin.txt");
	 ofstream Admin("Admin.txt");
 }
};

