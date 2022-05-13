#include "DailyEmployee.h"
//DailyEmployee::DailyEmployee() {
//	_name = "";
//	_numDay = 0;
//}

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

string DailyEmployee::toString() {
	stringstream builder;
	 
	builder << "Daily Employee: " << endl;
	builder << "Name: " << _name << endl;
	builder << "Total day: " << _numDay << endl;
	builder << "Salary: " << this->calSalary() << endl;

	string result = builder.str();
	return result;
}