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

IEmployee* HourlyEmployee::generate(string line) {
	int idx_type = line.find(":");

	int idx_name = line.find(";");
	string name = line.substr(idx_type + 2, idx_name - (idx_type + 2));

	int idx_salary_1 = line.find("=");
	int idx_salary_2 = line.find("$");
	int salary = atoi(line.substr(idx_salary_1 + 1, idx_salary_2 - (idx_salary_1 + 1)).c_str());
	
	int idx_hour = line.find("=", idx_salary_2);
	int numHour = atoi(line.substr(idx_hour + 1).c_str());

	IEmployee* result = new HourlyEmployee(name, numHour, salary);
	return result;
}