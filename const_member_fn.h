#pragma once
#include <iostream>
using namespace std;

class Employee {
private:
    string name;
    int id;

public:
    Employee(string n, int i) {
        name = n;
        id = i;
    }

    // Constant member function
    void display() const {
        cout << "Name: " << name << ", ID: " << id << endl;
    }

    // ? This would cause an error inside a const function
    // void update() const {
    //     name = "New Name";  // Not allowed
    // }
};