#pragma once
#include <iostream>
#include <functional>
using namespace std;

int wrapping_lambda_function() {
	function<void(int)>riskCheck = [](int ordersize) {				//returbn type void, parameter int ordersize
		if(ordersize>1000) {
			cout<<"High Risk Order"<<endl;
		}
		else {
			cout<<"Normal Order"<<endl;
		}
		};
	riskCheck(1200);
	return 0;
}