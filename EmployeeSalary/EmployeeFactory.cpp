#include "EmployeeFactory.h"
int EmployeeFactory::supportedTypeCount() {
	return prototypes.size();
}

EmployeeFactory* EmployeeFactory::instance() {
	if (_instance == NULL) {
		_instance = new EmployeeFactory();
	}
	return _instance;
}