#pragma once
#include <iostream>
#include <deque>
using namespace std;

int dequeue_example() {
	cout << "This is a placeholder for Dequeue example." << endl;
	deque<int>dq;
	dq.push_front(10);
	dq.push_back(20);
	dq.push_front(5);
	dq.push_back(25);
	dq.push_front(1);
	dq.push_front(-99);
	for (const auto& val : dq) {
		cout << val << " ";
	}
	cout << endl;
	cout << "change elenent of 3 rd position to 100" << endl;
	dq[2] = 100;
	for (const auto& val : dq) {
		cout << val << " ";
	}
	return 0;
}