#pragma once
#include<iostream>
#include<string>
#include<stdexcept>
using namespace std;
template<typename T,int Size=512>
class Stack {
	using value_type = T;
public:// value_type ab T ka ek alternate naam hai.
	//Stack() {
	//	m_top = -1;
	//}
	Stack() : m_top(-1) {}					// constructor initializing m_top Copy constructor (defined inside the class using shorthand notation).

	Stack(const Stack& other) {
		m_top = other.m_top;
		for (int i = 0; i <= m_top; ++i) {
			m_buffer[i] = other.m_buffer[i];
		}
	}
	~Stack() = default;

	void Push(const T& value);

	void Pop();

	const T& Top() const;					//“Ye function ek read-only reference deta hai top element ka,aur object ke state ko change nahi karega.”

	bool IsEmpty() const { return m_top == -1; }
	bool IsFull()  const { return m_top + 1 >= Size; }				 // next index would be Size -> full
	int  Count()   const { return m_top + 1; }

	static Stack Create();

private:
	int  m_top;											 // index of current top (starts at -1 for empty)
	T    m_buffer[Size];								// fixed-size buffer; Size must be a compile-time constant
};


// Template header for all definitions below:
template <typename T, int Size>
void Stack<T, Size>::Push(const T& value) {				//Ye Stack class template ka Push() function ka definition hai.
	if (IsFull()) {
		throw overflow_error("Stack::Push - stack is full");
	}
	++m_top;
	m_buffer[m_top] = value;
}

template <typename T, int Size>
void Stack<T, Size>::Pop() {
	if (IsEmpty()) {
		throw underflow_error("Stack::Pop - stack is empty");
	}
	--m_top;
}

template <typename T, int Size>
const T& Stack<T, Size>::Top() const {
	if (IsEmpty()) {
		throw underflow_error("Stack::Top - stack is empty");
	}
	return m_buffer[m_top];
}

// Static factory method definition (longhand). This returns a Stack<T,Size> by value.
// Demonstrates that return type must exactly match the template parameters.
template <typename T, int Size>
Stack<T, Size> Stack<T, Size>::Create() {
	Stack<T, Size> s;
	// Optionally initialize with some default values (here none).
	return s; // RVO / move will avoid extra copies in modern compilers.
}


int main_calling_class_template() {
	try {
		// 1) Stack of integers with compile-time size 10
		Stack<int, 10> intStack;
		for (int i = 1; i <= 5; ++i) intStack.Push(i * 10); // push 10,20,...50

		cout << "intStack has " << intStack.Count() << " elements:\n";
		while (!intStack.IsEmpty()) {
			cout << "top = " << intStack.Top() << '\n';
			intStack.Pop();
		}
		cout << "---\n";

		// 2) Stack of floats with size 3 (small to demonstrate overflow)
		auto floatStack = Stack<float, 3>::Create(); // use static factory
		floatStack.Push(1.5f);
		floatStack.Push(2.75f);
		floatStack.Push(3.25f);
		cout << "floatStack top: " << floatStack.Top() << '\n';
		// Next push would throw overflow
		// floatStack.Push(4.0f); // uncommenting will throw

		cout << "---\n";

		// 3) Stack of strings (shows template works for non-primitive types)
		Stack<string, 5> stringStack;
		stringStack.Push("first");
		stringStack.Push("second");
		stringStack.Push("third");

		// Copy constructor demo (makes a separate copy)
		Stack<string, 5> copyOfStringStack = stringStack;
		cout << "copyOfStringStack contents:\n";
		while (!copyOfStringStack.IsEmpty()) {
			cout << copyOfStringStack.Top() << '\n';
			copyOfStringStack.Pop();
		}

	}
	catch (const exception& ex) {
		cerr << "Exception: " << ex.what() << '\n';
	}
	return 0;
}