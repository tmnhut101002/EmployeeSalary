#pragma once
#include "Employee.h"
#define SALARY_EMPLOYEE 100
#define FIXED_SALARY 500
class Manager:public Employee
{
private:
	int _numEmployee;
public:
	// Constructor & destructor
	Manager();
	Manager(string, int);
	~Manager();
	// Getter & setter
	int NumEmployee() { return _numEmployee; }
	void setNumEmployee(int value) { _numEmployee = value; }
	// function 
	int calSalary();
};

