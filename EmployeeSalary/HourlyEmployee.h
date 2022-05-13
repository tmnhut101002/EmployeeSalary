#pragma once
#include "IEmployee.h"

#define SALARY_HOUR 15

class HourlyEmployee: public IEmployee
{
private:
	int _numHour;
public:
	// Constructor & destructor
	HourlyEmployee() {};
	HourlyEmployee(string, int);
	~HourlyEmployee();
	// Getter & setter
	int NumHour() { return _numHour; }
	void setNumHour(int value) { _numHour = value; }
	// function
	int calSalary();
	string toString();
};

