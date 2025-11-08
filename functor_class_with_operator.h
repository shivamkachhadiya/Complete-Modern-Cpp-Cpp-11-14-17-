#pragma once
#include <iostream>
#include <functional>
using namespace std;

struct TradeExecutor {
	void operator()(string symbol,int qty) const {
		// Simulate executing a trade with the given quantity
		std::cout << "Executing trade for quantity: " <<symbol<<" " << qty << std::endl;
	}
};

int functor_class_with_operator() {
	function<void(string, int)>exec = TradeExecutor{};
	exec("mahindra and mahindra", 500);	
	return 0;
}