#pragma once
#include "IEmployee.h"

class Manager: public IEmployee
{
private:
	int _numEmployee; 
	int _fixedSalary;
	int _salary;
public:
	// Constructor & destructor
	Manager() {};
	Manager(string, int, int, int);
	~Manager();
	// Getter & setter
	int NumEmployee() { return _numEmployee; }
	void setNumEmployee(int value) { _numEmployee = value; }
	int FixedSalary() { return _fixedSalary; }
	void setFixedSalary(int value) { _fixedSalary = value; }
	int Salary() { return _salary; }
	void setSalary(int value) { _salary = value; }
	// function 
	int calSalary();
	string toString();
	IEmployee* generate(string);
	string className() { return "Manager"; }
};


