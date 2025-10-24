#pragma once
#include<iostream>
using namespace std;

class ShivamPrint {

private:
	int salary;
	string address;
public:
	string name="shivam";
	string company="bharti airtel";
	string role="cheif finance officer";
	ShivamPrint(){
		salary = 1000000;
		address = "mumbai";
		cout << "Name: " << name << endl;
		cout << "Company: " << company << endl;
		cout << "Role: " << role << endl;
		cout << "Salary: " << salary << endl;
		cout << "Address: " << address << endl;
	}
};