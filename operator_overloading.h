#pragma once
#include <iostream>
using namespace std;

class Integer {
    int* m_pInt; // Pointer to dynamically allocated integer

public:
    // Parameterized constructor
    Integer(int value = 0) { // default + parameterized dono handle
        m_pInt = new int(value);
        cout << "Parameterized Constructor called with value: " << value << endl;
    }

    // Destructor
    ~Integer() {
        cout << "Destructor called for value: " << *m_pInt << endl;
        delete m_pInt;
    }

    // Overload + operator
    Integer operator+(const Integer& obj) {
        Integer temp;
        *temp.m_pInt = *this->m_pInt + *obj.m_pInt;
        cout << "Operator+ called\n";
        return temp;
    }

    // Display function
    void Display() const {
        cout << "Value = " << *m_pInt << endl;
    }
};
