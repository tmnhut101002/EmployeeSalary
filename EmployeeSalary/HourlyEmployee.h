#pragma once
#include "IEmployee.h"

#define SALARY_HOUR 15

class HourlyEmployee: public IEmployee
{
private:
	int _numHour;
	int _salary;
public:
	// Constructor & destructor
	HourlyEmployee() {};
	HourlyEmployee(string, int, int);
	~HourlyEmployee();
	// Getter & setter
	int NumHour() { return _numHour; }
	void setNumHour(int value) { _numHour = value; }
	int Salary() { return _salary; }
	void setSalary(int value) { _salary = value; }
	// function
	int calSalary();
	string toString();
};

