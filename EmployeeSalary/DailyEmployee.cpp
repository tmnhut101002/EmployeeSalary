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
	 
	builder << "Daily Employee " << endl;
	builder << "Name: " << _name << endl;
	builder << "Total day: " << _numDay << endl;
	builder << "Salary: " << this->calSalary() << endl;

	string result = builder.str();
	return result;
}

IEmployee* DailyEmployee::generate(string line) {
	int idx_type = line.find(":");
	int idx_name = line.find(";");
	string name = line.substr(idx_type + 2, idx_name-(idx_type + 2));

	int idx_salary_1 = line.find("=");
	int idx_salary_2 = line.find("$");
	int salary = atoi(line.substr(idx_salary_1 + 1, idx_salary_2 - (idx_salary_1 + 1)).c_str());

	int idx_day = line.find("=", idx_salary_2);
	int numDay = atoi(line.substr(idx_day + 1).c_str());

	IEmployee* result = new DailyEmployee(name, numDay, salary);
	return result;
}
