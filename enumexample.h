#pragma once
#include<iostream>
using namespace std;

enum Color {
	RED,
	GREEN,
	BLUE
};

void fillColor(Color color) {
	if (color == RED) {
		cout << "Filling color RED" << endl;
	}
	else if (color == GREEN) {
		cout << "Filling color GREEN" << endl;
	}
	else if (color == BLUE) {
		cout << "Filling color BLUE" << endl;
	}
}