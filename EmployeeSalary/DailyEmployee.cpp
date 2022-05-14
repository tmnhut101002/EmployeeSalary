#include "DailyEmployee.h"

DailyEmployee::DailyEmployee(string name, int numDay, int salary) {
	_name = name;
	_numDay = numDay;
	_salary = salary;
}
DailyEmployee::~DailyEmployee() {
	//Do nothing
}
int DailyEmployee::calSalary() {
	return _salary * _numDay;
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