#pragma once
#include "IEmployee.h"

#define SALARY_DAY 100
class DailyEmployee : public IEmployee
{
private:
	int _numDay;
public:
	// Constructor & destructor
	DailyEmployee() {};
	DailyEmployee(string, int);
	~DailyEmployee();
	// Getter & setter
	int NumDay() { return _numDay; }
	void setNumDay(int value) { _numDay = value; }
	// function
	int calSalary();
public:
	string toString();
};

