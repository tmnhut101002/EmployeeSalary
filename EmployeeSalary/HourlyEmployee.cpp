#include "HourlyEmployee.h"

HourlyEmployee::HourlyEmployee(string name, int numHour, int salary) {
	_name = name;
	_numHour = numHour;
	_salary = salary;
}
HourlyEmployee::~HourlyEmployee() {
	// Do nothing
}

int HourlyEmployee::calSalary() {
	return _salary * _numHour;
}

string HourlyEmployee::toString() {
	stringstream builder;

	builder << "Hourly Employee: " << endl;
	builder << "Name: " << _name << endl;
	builder << "Total hour: " << _numHour << endl;
	builder << "Salary: " << this->calSalary() << endl;

	string result = builder.str();
	return result;
}