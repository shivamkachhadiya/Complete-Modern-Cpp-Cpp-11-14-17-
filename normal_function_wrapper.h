#pragma once
#include<iostream>
#include <functional>
using namespace std;

void executeorder(int qty) {
	cout << "Executing order quantity: " << qty << endl;
}

int normal_function_wrapper() {
	function<void(int)>tradeCallBack = executeorder;
	tradeCallBack(100);
	

	return 0;
}