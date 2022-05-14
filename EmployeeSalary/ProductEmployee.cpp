#include "ProductEmployee.h"

ProductEmployee::ProductEmployee(string name, int numProduct, int salary) {
	_name = name;
	_numProduct = numProduct;
	_salary = salary;
}

ProductEmployee::~ProductEmployee() {
	// Do nothing
}

int ProductEmployee::calSalary() {
	return _salary * _numProduct;
}

string ProductEmployee::toString() {
	stringstream builder;

	builder << "Product Employee " << endl;
	builder << "Name: " << _name << endl;
	builder << "Total products: " << _numProduct << endl;
	builder << "Salary: " << this->calSalary() << endl;

	string result = builder.str();
	return result;
}

IEmployee* ProductEmployee::generate(string line) {
	int idx_type = line.find(":");

	int idx_name = line.find(";");
	string name = line.substr(idx_type + 2, idx_name - (idx_type + 2));

	int idx_salary_1 = line.find("=");
	int idx_salary_2 = line.find("$");
	int salary = atoi(line.substr(idx_salary_1 + 1, idx_salary_2 - (idx_salary_1 + 1)).c_str());

	int idx_product = line.find("=", idx_salary_2);
	int numProduct = atoi(line.substr(idx_product + 1).c_str());

	IEmployee* result = new ProductEmployee(name, numProduct, salary);
	return result;
}