#include "company.h"


using namespace std;


    Company::Company(string compNameIn):compName(compNameIn) {};

    string Company::getCompName() const{return compName};

    vector<Employee> Employee::getEmployees() const{return employees};

    void Company::createEmployee(string employeeIDIn, string firstNameIn, string lastNameIn, double hourlyWageIn, int hoursWorkedIn){
      employees.push_back(Employee(employeeIDIn, firstNameIn, lastNameIn, hourlyWageIn, hoursWorkedIn));
    }
