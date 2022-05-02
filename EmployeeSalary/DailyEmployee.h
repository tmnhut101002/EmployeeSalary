#pragma once
#include "Employee.h"
#define SALARY_DAY 100
class DailyEmployee : public Employee
{
private:
	int _numDay;
public:
	// Constructor & destructor
	DailyEmployee();
	DailyEmployee(string, int);
	~DailyEmployee();
	// Getter & setter
	int NumDay() { return _numDay; }
	void setNumDay(int value) { _numDay = value; }
	// function
	int calSalary();
};

