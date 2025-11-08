#pragma once
#include <iostream>
using namespace std;

template<typename T,int size>
//any type T, define size of array

void sort(T(&arr)[size]) {							//The function takes an array reference, not a pointer.
	for(int i=0;i<size-1;i++) {
		for(int j=0;j<size-i-1;j++) {
			if(arr[j]>arr[j+1]) {
				T temp=move(arr[j]);
				arr[j]=move(arr[j+1]);
				arr[j+1]=move(temp);
			}
		}
	}

}

int callbacks_calling() {
	int arr[] = { 5,2,9,1,5,6 };

	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	sort(arr);
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	return 0;
}