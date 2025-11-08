#pragma once
#include <iostream>
#include <list>
using namespace std;

void list_example() {
	list<int> myList;
	myList.push_back(10);
	myList.push_back(20);
	myList.push_back(30);
	for(int i=1;i<=5;i++) {
		myList.push_back(i*10);
	}
	for (const auto& val : myList) {
		cout << val << " ";
	}

}