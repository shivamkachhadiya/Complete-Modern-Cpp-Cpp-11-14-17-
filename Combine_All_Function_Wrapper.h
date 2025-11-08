#pragma once
#include <iostream>
#include "bind_pre_filling_arguments.h"
#include "functor_class_with_operator.h"
#include "normal_function_wrapper.h"
#include "wrapping_lambda_function.h"
using namespace std;
int function_wrapper_all_calling() {
	cout << "=====function wrapper examples=====" << endl;
	normal_function_wrapper();
	cout << "-----------------------------------" << endl;
	cout << "wrapping lambda function example" << endl;
	wrapping_lambda_function();
	cout << "-----------------------------------" << endl;
	cout << "functor class with operator example" << endl;
	functor_class_with_operator();
	cout << "-----------------------------------" << endl;
	cout << "bind pre filling arguments example" << endl;
	bind_calling();
	cout << "-----------------------------------" << endl;
	return 0;
}
