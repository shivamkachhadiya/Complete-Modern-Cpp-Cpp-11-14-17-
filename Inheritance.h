#pragma once
#include<iostream>
using namespace std;

class animal {
public:
	void eat() {
		cout << "animal eating...." << endl;
	}
	void speak() {
		cout << "animal speaking...." << endl;
	}
	void sleep() {
		cout << "animal sleeping...." << endl;
	}
};

class dog : public animal {
	public:
	void bark() {
		cout << "dog barking...." << endl;
	}
	void eat() {
		cout << "dog eating...." << endl;
	}
};
