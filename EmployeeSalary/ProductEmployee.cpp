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

	builder << "Product Employee: " << endl;
	builder << "Name: " << _name << endl;
	builder << "Total products: " << _numProduct << endl;
	builder << "Salary: " << this->calSalary() << endl;

	string result = builder.str();
	return result;
}