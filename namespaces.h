#pragma once
#include<iostream>
using namespace std;

namespace avg {
	float calculate(float a, float b) {
		return(a + b) / 2;
	}
}

namespace sum {
	float calculate(float a, float b) {
		return a + b;
	}
}