#pragma once
#include <iostream>
using namespace std;

int capture_by_value() {
	int price = 100;
	auto capture_by_value = [price]() {
		cout << "capture by value: " << price << endl;
		};
	price = 20;
	capture_by_value(); // Outputs: 100
	return 0;
}