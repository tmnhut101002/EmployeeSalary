#include "HourlyEmployee.h"

//HourlyEmployee::HourlyEmployee() {
//	_name = "";
//	_numHour = 0;
//}

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

string HourlyEmployee::toString() {
	stringstream builder;

	builder << "Hourly Employee: " << endl;
	builder << "Name: " << _name << endl;
	builder << "Total hour: " << _numHour << endl;
	builder << "Salary: " << this->calSalary() << endl;

	string result = builder.str();
	return result;
}