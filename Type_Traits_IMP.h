#pragma once
#include <iostream>
#include<type_traits>

using namespace std;

void fn_type_traits_example() {
	cout << boolalpha << " is Integer ? " << is_integral<int>::value << endl;
}

template<typename T>
T divide(T a, T b) {
	if (is_floating_point<T>::value == false) {
		cout << "use floating point type only" << endl;
		return 0;
	}
	return a / b;
}
void check_div_type_template() {
	cout << divide(5, 2) << endl;
}