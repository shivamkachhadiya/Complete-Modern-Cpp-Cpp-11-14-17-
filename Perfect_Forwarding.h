#pragma once
#include<iostream>

using namespace std;

void process(int& lval) {
	cout << "Lvalue processed: " << lval << endl;
}

void process(int&& rval) {
	cout << "Rvalue processed: " << rval << endl;
}

//T&&-Universal Reference or Forwarding Reference
template <typename T>

void forward(T&& arg) {
	//forwarding the argument to process function
	process(std::forward<T>(arg));
}	

void example_perfect_farward_calling() {
	int x = 10;
	forward(x);          // Calls process with lvalue (int&)
	forward(20);         // Calls process with rvalue (int&&) 
}  

