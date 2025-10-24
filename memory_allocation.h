#pragma once
#include<iostream>
#include <cstdlib>  // Correct header for malloc and free in C++



using namespace std;
int memory_allocation() {
	int* p = (int*)malloc(sizeof(int));
	*p = 45;
	cout << *p;
	free(p);
	return 0;
	
}

int calloc_example() {
	int n;
	cout << "enter number of elements: ";
	cin >> n;
	int* p = (int*)calloc(n, sizeof(int));
	for (int i = 0; i < n; i++) {
		cout << p[i] << " ";
		
	}
	cout << "memory allocated using calloc" << endl;
	free(p);
	return 0;

}

int new_memory_allocation() {
	int* p = new int;
	*p = 10;
	cout << "memory allocated using new operator" << endl;
	cout << *p << endl;
	delete p;
	cout << "memory deallocated using delete operator" << endl;
	
	return 0;
}

void new_arrays() {
	int* p = new int[5];
	for(int i=0;i<5;i++){
		p[i]=i;
	}
	for (int i = 0; i < 5; i++) {
		cout << p[i] << " ";
	}
	
	delete []p;

}