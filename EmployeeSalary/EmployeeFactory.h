#pragma once
#include "IEmployee.h"
#include "DailyEmployee.h"
#include "HourlyEmployee.h"
#include "ProductEmployee.h"
#include "Manager.h"
class DailyEmployee;
class HourlyEmployee;
class ProductEmployee;
class Manager;

class EmployeeFactory
{
private:
	static inline EmployeeFactory* _instance = NULL;
	vector<IEmployee*> _prototypes;

	EmployeeFactory() {
		_prototypes.push_back(new DailyEmployee());
		_prototypes.push_back(new HourlyEmployee());
		_prototypes.push_back(new ProductEmployee());
		_prototypes.push_back(new Manager());
	}

public: 
	int supportedTypeCount();
	static EmployeeFactory* instance();
	IEmployee* create(int type, string line) {

		IEmployee* employee = _prototypes[type]->generate(line);
		return employee;
	}
};

class IConvertor {
public:
	virtual string convert(void* staff) = 0;
};


class DailyEmployeeIUConverter : public IConvertor {
public:
	string convert(void* staff) {
		DailyEmployee* Dstaff = (DailyEmployee*)staff;

		stringstream builder;

		builder << "Daily Employee: " << endl;
		builder << "Name: " << Dstaff->Name() << endl;
		builder << "Total day: " << Dstaff->NumDay() << endl;
		builder << "Salary: " << Dstaff->calSalary() << endl;

		string result = builder.str();
		return result;
	}
};


class HourlyEmployeeIUConverter : public IConvertor {
public:
	string convert(void* staff) {
		HourlyEmployee* Dstaff = (HourlyEmployee*)staff;

		stringstream builder;

		builder << "Hourly Employee " << endl;
		builder << "Name: " << Dstaff->Name() << endl;
		builder << "Total Hour: " << Dstaff->NumHour() << endl;
		builder << "Salary: " << Dstaff->calSalary() << endl;

		string result = builder.str();
		return result;
	}
};


class ProductEmployeeIUConverter : public IConvertor {
public:
	string convert(void* staff) {
		ProductEmployee* Dstaff = (ProductEmployee*)staff;

		stringstream builder;

		builder << "Product Employee: " << endl;
		builder << "Name: " << Dstaff->Name() << endl;
		builder << "Total products: " << Dstaff->NumProduct() << endl;
		builder << "Salary: " << Dstaff->calSalary() << endl;

		string result = builder.str();
		return result;
	}
};


class ManagerIUConverter : public IConvertor {
public:
	string convert(void* staff) {
		Manager* Dstaff = (Manager*)staff;

		stringstream builder;

		builder << "Manager: " << endl;
		builder << "Name: " << Dstaff->Name() << endl;
		builder << "Total employees: " << Dstaff->NumEmployee() << endl;
		builder << "Salary: " << Dstaff->calSalary() << endl;

		string result = builder.str();
		return result;
	}
};
