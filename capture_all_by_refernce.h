#pragma once
#include<iostream>
using namespace std;

int capture_all_by_refernce() {
	int buyorders = 5;
	int sellorders = 10;

	auto adjustorders = [&]() {
		buyorders++;
		sellorders++;
		cout << "Inside lambda - Buy Orders: " << buyorders << ", Sell Orders: " << sellorders << endl;
		};
	sellorders = 20;
	adjustorders();
	return 0;
}