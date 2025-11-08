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
#include "enumexample.h"
#include "string_example.h"
#include "Inheritance.h"
#include "template_ex.h"
#include "Class_Templates_IMP.h"
#include "Perfect_Forwarding.h"
#include "variadic_template.h"
#include "Partial_Specialization.h"
#include "Type_Traits_IMP.h"
#include "CallBacks.h"
#include "Comparator.h"
#include "Lambda_Exp_Ex.h"
#include "capture_by_value.h"
#include "capture_by_refernce.h"
#include "capture_all_by_refernce.h"
#include "normal_function_wrapper.h"
#include "Combine_All_Function_Wrapper.h"
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
	//operator_overloading_example();

	//=============enum example=================
	//fillColor(RED);
	//fillColor(GREEN);
	//fillColor(BLUE);
	//

	//=================string===================
	//string firstname;
	//cin >> firstname;
	//string lastname;
	//cin >> lastname;
	//cout << firstname.length() << " " << lastname.length() << endl;
	//cout << combine(firstname, lastname);


	//================inheritance=================
	//dog d;
	//d.eat();  // Calls the overridden eat() method in dog class
	//d.bark(); // Calls the bark() method in dog class
	//d.speak();
	//d.sleep();


	//=================template===================
	//cout << getMax<int>(10, 20) << endl;          // For integers
	//cout << getMax<double>(10.5, 20.3) << endl;  // For doubles
//example_calling();
//example_perfect_farward_calling();

//================variadic template=================
//main_variadic_template();

//====================class template IMP================
//main_calling_class_template();

//==================partial specialization=================
//main_Partial_Specialization_Calling();

//==================type traits=================
//fn_type_traits_example();
//check_div_type_template();

//=========================callbacks====================
//callbacks_calling();
//compatator_callbacks_calling();

//==================lambda expression=================
//lamda_ex_print();
//lamda_ex_with_function();
//capture_by_value();
//capture_by_refernce();
//capture_all_by_refernce();



//======================function wrapper====================
//normal_function_wrapper();
function_wrapper_all_calling();
return 0;
}

