#include "Manager.h"
Manager::Manager() {
	_name = "";
	_numEmployee = 0;
}

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