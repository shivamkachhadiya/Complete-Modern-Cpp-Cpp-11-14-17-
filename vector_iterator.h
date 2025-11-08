#pragma once


#include <iostream>
#include <vector>
using namespace std;

int vector_iterator_example() {
	vector<int> numbers = {10, 20, 30, 40, 50};
	cout << "Using iterator to traverse the vector:" << endl;
	auto itr=numbers.begin();
	while(itr!=numbers.end()) {

		cout<<*itr++<<endl;
		
	}
	return 0;
}