#include "ProductEmployee.h"
//ProductEmployee::ProductEmployee() {
//	_name = "";
//	_numProduct = 0;
//}

ProductEmployee::ProductEmployee(string name, int numProduct) {
	_name = name;
	_numProduct = numProduct;
}

ProductEmployee::~ProductEmployee() {
	// Do nothing
}

int ProductEmployee::calSalary() {
	return SALARY_PRODUCT * _numProduct;
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