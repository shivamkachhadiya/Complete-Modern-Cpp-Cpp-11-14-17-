#include <iostream>
using namespace std;

// Base case (stopping condition)
void Print_P() {}

// Variadic template (recursive case)
template <typename T, typename... Args>
void Print_P(T first, Args... args) {
    cout << first << endl;
    Print_P(args...);   // Recursion with remaining args
}

void main_variadic_template() {
    Print_P(1, 2.5, "Hello", 'A');
}
