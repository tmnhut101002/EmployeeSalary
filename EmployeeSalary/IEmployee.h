#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

class IEmployee
{
protected:
	string _name;
public:
	// Constructor & destructor
	IEmployee();
	IEmployee(string);
	// Getter & setter
	string Name() { return _name; }
	void setName(string value) { _name = value; }
public:
	virtual string toString() = 0;

};

