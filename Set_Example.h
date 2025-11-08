#pragma once
#include <iostream>
#include<set>

using namespace std;

void set_example() {
	set<int> mySet{ 54,334,4,54,65,3 };
	mySet.insert(100);
	mySet.insert(54); //duplicate value will not be inserted
	mySet.insert(23);
	mySet.erase(334);

	cout << "Set elements are (sorted order): ";
	for(const auto& val:mySet) {
		cout<<val<<" ";
	}
}
