#pragma once
#include "IEmployee.h"

class DailyEmployee : public IEmployee
{
private:
	int _numDay;
	int _salary;
public:
	// Constructor & destructor
	DailyEmployee() {};
	DailyEmployee(string, int, int);
	~DailyEmployee();
	// Getter & setter
	int NumDay() { return _numDay; }
	void setNumDay(int value) { _numDay = value; }
	int Salary() { return _salary; }
	void setSalary(int value) { _salary = value; }
	// function
	int calSalary();
	
public:
	string toString();
	IEmployee* generate(string);
	string className() { return "DailyEmployee"; }
};

