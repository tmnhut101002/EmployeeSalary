#include "Manager.h"
//Manager::Manager() {
//	_name = "";
//	_numEmployee = 0;
//}

Manager::Manager(string name, int numEmployee) {
	_name = name;
	_numEmployee = numEmployee;
}

Manager::~Manager() {
	//Do nothing
}

int Manager::calSalary() {
	return FIXED_SALARY + SALARY_EMPLOYEE * 100;
}

string Manager::toString() {
	stringstream builder;

	builder << "Manager: " << endl;
	builder << "Name: " << _name << endl;
	builder << "Total Employee: " << _numEmployee << endl;
	builder << "Salary: " << this->calSalary() << endl;

	string result = builder.str();
	return result;
}