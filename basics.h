#pragma once
#include<iostream>
using namespace std;

//int a = 30, b = 20;
//int c{666};
////cout << c;
//int arr[4]{ 1,2,3,4 };
//cout << arr[2];
////cout << "Hello, World!" << endl;

//char buff[512];
//cout << "enter name=>";
//cin >> buff;
//cout << "your name is " << buff;

////enter name -> shivam kachhadiya
////your name is shivam

char buff[512];
cout << "enter name=>";
cin.getline(buff, sizeof(buff), '\n');
cout << "your name is " << buff;