#include "ProductEmployee.h"
ProductEmployee::ProductEmployee() {
	_name = "";
	_numProduct = 0;
}

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