#pragma once
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Employee
{
protected:
	string _name;
public:
	// Constructor & destructor
	Employee();
	Employee(string);
	// Getter & setter
	string Name() { return _name; }
	void setName(string value) { _name = value; }

};

