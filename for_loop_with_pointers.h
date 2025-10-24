#pragma once
#include<iostream>
using namespace std;

void for_loop_with_ptrs() {
	int arr[] = { 1,2,3,4,5,6,7,8,0 };

	int n = sizeof(arr) / sizeof(int);

	int *start = &arr[0];
	int* end = &arr[n];

	while (start != end) {
		cout << *start << " ";
		++start;
	}

}