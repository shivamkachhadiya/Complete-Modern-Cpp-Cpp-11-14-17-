#pragma once
#include<iostream>
using namespace std;

struct Point {
	int x;
	int y;
};

void printPoint(Point p) {
	cout << "X: " << p.x << ", Y: " << p.y << endl;
}
// main
// Create a Point and initialize it
// 
//Point p1;
//p1.x = 10;
//p1.y = 20;
//
//// Print the point
//printPoint(p1);
