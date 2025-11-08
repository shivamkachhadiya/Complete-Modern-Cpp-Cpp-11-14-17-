#pragma once
#include <iostream>
#include<map>
using namespace std;

void map_example() {
	cout << "This is a placeholder for Map example." << endl;
	map<int, string> employeeMap{
		{1,"shivam"},
		{2,"mahindra"},
		{113,"tata"},
		{4,"ford"}
	};
	employeeMap.insert({ 5,"taiwan semiconductor" });
	employeeMap.insert(make_pair(6, "apple inc"));
	for(const auto& pair:employeeMap) {
		cout<<pair.first<<" => "<<pair.second<<endl;
	}	

	cout << "finding element with key 113: " << employeeMap.find(113)->second << endl;

	//employeeMap.find(999)->second; //if key not found returns end iterator
}