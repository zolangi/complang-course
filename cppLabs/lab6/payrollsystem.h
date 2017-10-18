#ifndef PAYROLLSYSTEM
#define PAYROLLSYSTEM

#include <vector>
#include <string>
#include "employee.h"

using namespace std;

class PayrollSystem{
  public:
    PayrollSystem() = default;
    PayrollSystem(string compNameIn);
    string getCompName() const;
    vector<Employee> getEmployees() const;


    void setCompName(string compNameIn);

    void addCompany(string compNameIn);
    void addEmployee(string employeeIDIn, string firstNameIn, string lastNameIn, double hourlyWageIn, int hoursWorkedIn);
    void removeEmployee(string employeeIDIn);
    void recordHoursCP(string employeeIDIn); //records hours for the current pay period

    void issuePaychecks();
    void showEmployees();

  private:
    string compName;
    vector<Employee> employees;
    int findEmployee(string key);
};
#endif
