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

	builder << "Manager " << endl;
	builder << "Name: " << _name << endl;
	builder << "Total Employee: " << _numEmployee << endl;
	builder << "Salary: " << this->calSalary() << endl;

	string result = builder.str();
	return result;
}

IEmployee* Manager::generate(string line) {
	int idx_type = line.find(":");

	int idx_name = line.find(";");
	string name = line.substr(idx_type + 2, idx_name - (idx_type + 2));

	int idx_fixed_salary_1 = line.find("=");
	int idx_fixed_salary_2 = line.find("$");
	int fixed_salary = atoi(line.substr(idx_fixed_salary_1 + 1, idx_fixed_salary_1 -(idx_fixed_salary_1 + 1) ).c_str());

	int idx_employee_1 = line.find("=");
	int idx_employee_2 = line.find(";", idx_fixed_salary_2 + 2);
	int numEmployee = atoi(line.substr(idx_employee_1 + 1, idx_employee_2 - (idx_employee_1 + 1)).c_str());

	int idx_salary_1 = line.find("=", idx_employee_2);
	int idx_salary_2 = line.find("$", idx_employee_2);
	int salary = atoi(line.substr(idx_salary_1 + 1, idx_salary_2 - (idx_salary_1 + 1)).c_str());

	IEmployee* result = new Manager(name, numEmployee, fixed_salary, salary);
	return result;
}
