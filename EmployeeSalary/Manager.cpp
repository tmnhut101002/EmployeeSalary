#include "Manager.h"


Manager::Manager(string name, int numEmployee, int fixed_salary, int salary) {
	_name = name;
	_numEmployee = numEmployee;
	_fixedSalary = fixed_salary;
	_salary = salary;
}

Manager::~Manager() {
	//Do nothing
}

int Manager::calSalary() {
	return _fixedSalary + _salary * 100;
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