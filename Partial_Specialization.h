#pragma once

#include <iostream>
#include <string>
using namespace std;

template<typename T, int Columns>
class PrettyPrinter {
    T* m_pData;                                         // pointer to user data of type T

public:

    PrettyPrinter(T* p) : m_pData(p) {}

    void Print() const {
        // Generic printing: we print Columns value (compile-time constant)
        cout << "Columns available: " << Columns << " { " << *m_pData << " }\n";
    }

    T* GetData() { return m_pData; }

};

template<typename T>

class PrettyPrinter<T, 80> {                              //precise specialization for 80 columns

    T* m_pData;                                           //private data member hai (pointer) jo user ke data ko store karta hai.

public:
    PrettyPrinter(T* p) : m_pData(p) {}                       //constructor jo pointer p se m_pData ko initialize karta hai.

    void Print() const {
        // Special formatting reserved for 80-column devices
        cout << "[80-cols optimized] { " << *m_pData << " }\n";
    }
    T* GetData() { return m_pData; }
};

//  Primary SmartPointer template (for single object)
template<typename T>
class SmartPointer {
    T* m_ptr;
public:

    /*  Ye constructor hai. Agar tum ek normal pointer do (new se), to wo m_ptr me store karega. Agar kuch na do, to default nullptr set karega. explicit ka matlab : compiler implicit conversion allow nahi karega(safety ke liye).*/

    explicit SmartPointer(T* p = nullptr) : m_ptr(p) {}

    ~SmartPointer() { delete m_ptr; }                       // free single object

    T& operator*() const { return *m_ptr; }                 //Ye dereference operator (*) overload karta hai. derefernce operator ka use karke hum pointer ke through value ko access kar sakte hain.

    T* operator->() const { return m_ptr; }                 //Ye arrow operator (->) overload karta hai. Arrow operator ka use karke hum pointer ke through object ke members ko access kar sakte hain.

    T* Get() const { return m_ptr; }                        //Ye getter function hai.
};

//// Partial specialization for arrays

template<typename T>
class SmartPointer<T[]> {
    T* m_ptr;
public:

    /*  Ye constructor hai. Agar tum ek normal pointer do (new se), to wo m_ptr me store karega. Agar kuch na do, to default nullptr set karega. explicit ka matlab : compiler implicit conversion allow nahi karega(safety ke liye).*/

    explicit SmartPointer(T* p = nullptr) : m_ptr(p) {}

    ~SmartPointer() { delete[] m_ptr; }                     // free array object

    T& operator*() const { return *m_ptr; }                 //Ye dereference operator (*) overload karta hai. derefernce operator ka use karke hum pointer ke through value ko access kar sakte hain.

    T* operator->() const { return m_ptr; }                 //Ye arrow operator (->) overload karta hai. Arrow operator ka use karke hum pointer ke through object ke members ko access kar sakte hain.

    T* Get() const { return m_ptr; }                        //Ye getter function hai.

    //  Array ke liye operator[] overload karna zaruri hai
    T& operator[](int index) { return m_ptr[index]; }       // Ye array index access operator hai
};


int main_Partial_Specialization_Calling() {
    // PrettyPrinter demo:
    int x = 42;
    PrettyPrinter<int, 40> p1(&x);    // uses primary template
    p1.Print();                       // prints normal format

    PrettyPrinter<int, 80> p2(&x);    // uses partial specialization (Columns == 80)
    p2.Print();                       // uses [80-cols optimized] format

    // SmartPointer demo:
    SmartPointer<int> spSingle(new int(3));
    cout << "*spSingle = " << *spSingle << "\n";

    SmartPointer<int[]> spArray(new int[5]); // matches SmartPointer<T[]>
    spArray[2] = 99;
    cout << "spArray[2] = " << spArray[2] << "\n";

    return 0;
}
