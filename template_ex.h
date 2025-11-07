#pragma once
#include<iostream>
using namespace std;

template <typename T>
T getMax(T a, T b) {
	return (a > b) ? a : b;
	cout << typeid(T).name() << endl;

}

template <typename T>
T sum_template(T* parr, int size) {
	T sum{};
	for (int i = 0; i < size; i++) {
		sum += parr[i];
	}
	return sum;
}

void example_calling() {
	int arr[] = { 1,2,3,4,5 };
	int sum = sum_template(arr, 5);
	cout << "Sum is: " << sum << endl;
}