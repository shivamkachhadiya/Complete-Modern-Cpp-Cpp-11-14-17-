#pragma once
#include <iostream>       // For input/output
using namespace std;

class Integer {
    int* m_pInt;           // Pointer to an integer stored in heap

public:
    // Parameterized constructor (also works as default constructor with value = 0)
    Integer(int value = 0) {
        m_pInt = new int(value);                     // Allocate heap memory and initialize with 'value'
        cout << "Parameterized Constructor called with value: " << value << endl;  // Inform constructor called
    }

    // Copy constructor (Deep Copy)
    Integer(const Integer& obj) {
        m_pInt = new int(*obj.m_pInt);               // Allocate new memory and copy the value from obj
        cout << "Copy Constructor called\n";         // Inform copy constructor called
    }

    // Copy assignment operator (Deep Copy)
    Integer& operator=(const Integer& obj) {
        if (this != &obj) {                           // Check for self-assignment (a = a)
            *m_pInt = *obj.m_pInt;                    // Copy value from obj, reuse existing memory
        }
        cout << "Copy Assignment called\n";           // Inform copy assignment executed
        return *this;                                 // Return reference to this object to allow chaining
    }

    // Destructor
    ~Integer() {
        cout << "Destructor called for value: " << *m_pInt << endl;  // Inform destructor called with value
        delete m_pInt;                                           // Free heap memory
    }

    // Overload + operator (member function)
    Integer operator+(const Integer& obj) const {  // 'const' ensures this object is not modified
        Integer temp;                               // Create temporary Integer object (default value 0)
        *temp.m_pInt = *this->m_pInt + *obj.m_pInt; // Dereference both pointers, add values, store in temp
        cout << "Operator+ called\n";               // Inform operator+ executed
        return temp;                                // Return temp by value (copy or RVO optimization)
    }

    // Pre-increment (++num)
    Integer& operator++() {
        ++(*m_pInt);        // Increment value in heap
        return *this;       // Return current object by reference (efficient)
    }

    // Post-increment (num++)
    Integer operator++(int) {
        Integer temp(*this); // Create copy of current object (copy constructor called)
        ++(*m_pInt);         // Increment the current object
        return temp;         // Return old value (not by reference, temporary object returned)
    }

    // Equality operator
    bool operator==(const Integer& obj) const {
        return *m_pInt == *obj.m_pInt; // Compare values pointed by m_pInt
    }

    // Display
    void Display() const {
        cout << "Value = " << *m_pInt << endl; // Print value stored in heap
    }
};

void operator_overloading_example() {
    Integer num1(10);     // Constructor called, num1.m_pInt = 10
    Integer num2(20);     // Constructor called, num2.m_pInt = 20

    Integer sum = num1 + num2; // Operator+ called, sum.m_pInt = 30

    cout << "num1: "; num1.Display();  // 10
    cout << "num2: "; num2.Display();  // 20
    cout << "sum : "; sum.Display();   // 30

    ++num1;       // Pre-increment, num1.m_pInt = 11
    num2++;       // Post-increment, num2.m_pInt = 21 (returns old value 20 if used)

    cout << "After increment:" << endl;
    num1.Display();   // 11
    num2.Display();   // 21

    cout << "Check equality: " << (num1 == num2) << endl; // false, prints 0
}