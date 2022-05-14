#pragma once
#include "IEmployee.h"

class ProductEmployee : public IEmployee
{
private:
	int _numProduct;
	int _salary;
public:
	// Constructor & destructor
	ProductEmployee() {};
	ProductEmployee(string, int, int);
	~ProductEmployee();
	// Getter & setter
	int NumProduct() { return _numProduct; }
	void setNumProduct(int value) { _numProduct = value; }
	int Salary() { return _salary; }
	void setSalary(int value) { _salary = value; }
	// function 
	int calSalary();

	string toString();
};

