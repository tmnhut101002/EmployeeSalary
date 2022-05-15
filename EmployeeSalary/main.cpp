#include"IEmployee.h"
#include "EmployeeFactory.h"
#include <fstream>
#include <string>
#include <map>

struct {
	vector<IEmployee*> employees;
} state;

int main() {

	ifstream ifs;
	char filename[20] = "November2021.txt";
	ifs.open(filename, ios::in);

	if (!ifs) {
		cout << "Cannot open this file!!!" << endl;
		return 0;
	}

	vector<string> lines;
	string line;
	while (getline(ifs, line)) {
		lines.push_back(line);
	}

	for (int i = 0; i < lines.size(); i++) {
		int count = EmployeeFactory::instance()->supportedTypeCount();

		int idx_name = lines[i].find(":");
		string employee_type = lines[i].substr(0, idx_name);
		int type = -1;
		if (employee_type == "DailyEmployee") {
			type = 0;
		}
		else if (employee_type == "HourlyEmployee") {
			type = 1;
		}
		else if (employee_type == "ProductEmployee") {
			type = 2;
		}
		else if (employee_type == "Manager") {
			type = 3;
		}

		IEmployee* employee = EmployeeFactory::instance()->create(type, lines[i]);
		state.employees.push_back(employee);
	}

	map<string, IConvertor*> ui = {
		{(new DailyEmployee())->className(), new DailyEmployeeIUConverter()},
		{(new HourlyEmployee())->className(), new HourlyEmployeeIUConverter()},
		{(new ProductEmployee())->className(), new ProductEmployeeIUConverter},
		{(new Manager())->className(), new ManagerIUConverter()}
	};

	for (int i = 0; i < lines.size(); i++) {
		auto converter = ui[state.employees[i]->className()];
		string data = converter->convert((void*)state.employees[i]);

		cout << data << endl;
	}
	return 0;
}