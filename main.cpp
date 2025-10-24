#include<iostream>
#include "fun_add.h"
#include "assignment_1_pointers.h"
#include "namespaces.h"
#include "function_overloading.h"
#include "for_loop_with_pointers.h"
#include "shivamPrint.h"
#include "inline_function.h"
#include "memory_allocation.h"
#include "constructor.h"
#include "structures.h"
#include "this_pointer.h"
#include "const_member_fn.h"
#include "operator_overloading.h"
using namespace std;

int main() {
	//int a;
	//cin >> a;
	//int b;
	//cin >> b;
	//cout << fun_add(a, b);
	
	/*char arr[6] = { "abcd" };
	cout << arr[3];*/

	//int a = 10;
	//cout << &a<<endl;
	//int* p = &a;
	//cout << *p;

	//int x = 10;
	//int* p = &x;
	//*p = 5;
	//int y = *p;
	//cout << y << endl;


	//=============assignment 1=================
	//int a = 30;
	//int* p1 = &a;
	//int b = 50;
	//int* p2 = &b;
	//cout << add(p1, p2);
	// 
	// 
	//int a = 10;
	//int b = 20;
	//int* p1 = &a;
	//int* p2 = &b;
	//int result;
	//int* res = &result;
	// add_2(p1, p2, res);
	// cout << result;
	//=========================================
	//auto i = false;
	//cout << i;
	
	//int arr[] = { 5,7,4,3,2 };
	//for (auto x : arr) {
	//	cout << x<<" => ";
	//}

	//int arr[] = { 4,4,533,2,43 };
	//for (auto &l : arr) {
	//	l = 99;
	//	cout << l << "=> ";
	//}

	//for_loop_with_ptrs();

	//int result = add_int(5, 6);
	//cout << result << endl;
	//double res = add_double(15.50, 6.30);
	//cout << res << endl;

	//shivam("Hello Shivam Here");

	//int result = square(5 + 1);
	//cout << result;

	//cout<<avg::calculate(4.5f, 5.35f)<<endl;
	//cout<<sum::calculate(4.75f, 5.5f) << endl;

	//memory_allocation();
	//calloc_example();
	//new_memory_allocation();
	//new_arrays();
	//ShivamPrint();

	//==========struct==============
	//Point p1;
	//p1.x = 10;
	//p1.y = 20;
	//printPoint(p1);

	//=========this pointer example=============
	// Create an object of This_Pointer_Example
	//This_Pointer_Example obj("Shivam", 25);

	// Call the method to print data
	//obj.printData();

	//==============const member function===========
	//Employee emp("Shivam", 101);
	//emp.display();  // Calls the const member function

   //==============operator overloading============
	operator_overloading_example();
	
	return 0;
}

