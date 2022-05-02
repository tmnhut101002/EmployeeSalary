#include "DailyEmployee.h"
DailyEmployee::DailyEmployee() {
	_name = "";
	_numDay = 0;
}

DailyEmployee::DailyEmployee(string name, int numDay) {
	_name = name;
	_numDay = numDay;
}
DailyEmployee::~DailyEmployee() {
	//Do nothing
}
int DailyEmployee::calSalary() {
	return SALARY_DAY * _numDay;
}