#ifndef COMPANY
#define COMPANY

#include <vector>
#include <string>
#include "employee.h"

using namespace std;

class Company{
  public:
    Company(string compNameIn);
    string getCompName() const;
    vector<Employee> getEmployees() const;
    void createEmployee(string employeeIDIn, string firstNameIn, string lastNameIn, double hourlyWageIn, int hoursWorkedIn);
  private:
    string compName;
    vector<Employee> employees;
};
#endif
