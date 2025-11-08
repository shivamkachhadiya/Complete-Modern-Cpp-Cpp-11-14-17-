#pragma once
#include <iostream>
using namespace std;

int lamda_ex_print() {
	[]() {
		cout << "Hello from lambda!" << endl;
		}(); // Immediately invoked lambda expression
	return 0;
}

int lamda_ex_with_function() {
		auto add = [](int a, int b) {
		return a + b;
	};
	int result = add(5, 3);
	cout << "Sum: " << result << endl;
	cout << typeid(add).name() << endl;
	return 0;
}