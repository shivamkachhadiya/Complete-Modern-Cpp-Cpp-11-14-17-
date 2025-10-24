#pragma once
#include <iostream>
using namespace std;

class This_Pointer_Example {
public:
	string name;
	int age;
	This_Pointer_Example(string name, int age) {
		this->name = name;
		this->age = age;
	}
	void printData() {
		cout << "name : " << this->name << endl;
		cout << "age : " << this->age << endl;
	}
};