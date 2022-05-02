#pragma once
#include "Employee.h"
#define SALARY_PRODUCT 10
class ProductEmployee : public Employee
{
private:
	int _numProduct;
public:
	// Constructor & destructor
	ProductEmployee();
	ProductEmployee(string, int);
	~ProductEmployee();
	// Getter & setter
	int NumProduct() { return _numProduct; }
	void setNumProduct(int value) { _numProduct = value; }
	// function
	int calSalary();
};

