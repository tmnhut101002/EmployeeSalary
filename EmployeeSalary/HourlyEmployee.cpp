#include "HourlyEmployee.h"
HourlyEmployee::HourlyEmployee() {
	_name = "";
	_numHour = 0;
}

HourlyEmployee::HourlyEmployee(string name, int numHour) {
	_name = name;
	_numHour = numHour;
}
HourlyEmployee::~HourlyEmployee() {
	// Do nothing
}

int HourlyEmployee::calSalary() {
	return SALARY_HOUR * _numHour;
}
