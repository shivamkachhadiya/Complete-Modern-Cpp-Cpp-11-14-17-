#pragma once
#include <iostream>
using namespace std;

int capture_by_refernce() {
	int position = 10;
	auto capture_by_reference = [&position]() {
		cout << "capture by reference: " << position << endl;
		};
	position = 20;
	capture_by_reference(); // Outputs: 20
	return 0;
}