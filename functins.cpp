#include<iostream>
using namespace std;

int fun_add(int a, int b) {
	return a + b;
}
int main() {
	int ans = fun_add(5, 6);
	cout << ans;
	return 0;
}