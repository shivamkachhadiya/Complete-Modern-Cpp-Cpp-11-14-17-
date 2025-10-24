#pragma once
#include<iostream>
using namespace std;

int add(int* a, int* b) {
	return *a + *b;
}

void add_2(int* a, int* b, int* result) {
	*result = *a + *b;
}