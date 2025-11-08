#pragma once
#include <iostream>
#include <functional>
using namespace std;

void placeOrder(string symbol, int qty) {
    cout << "Order placed: " << symbol << " x " << qty << endl;
}

int bind_calling() {
    auto placeAAPL = std::bind(placeOrder, "AAPL", std::placeholders::_1);
    placeAAPL(100); // "Order placed: AAPL x 100"
	return 0;
}
