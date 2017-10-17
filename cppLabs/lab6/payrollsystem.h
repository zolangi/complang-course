#ifndef PAYROLLSYSTEM
#define PAYROLLSYSTEM

#include <vector>
#include <string>
#include "company.h"

using namespace std;

class PayrollSystem{
  public:
    PayrollSystem() = default;
    string getCompName();

    void setCompName();

    void addCompany(string compNameIN);
    void addEmployee(string employeeIDIn);
    void removeEmployee(string employeeIDIn);
    void recordHoursCP(string employeeIDIn); //records hours for the current pay period
    void issuePaychecks();
    void showEmployees();
  private:
    string compName;
    vector<Company> companies;
    int findEmployee(string key);
    int findCompany(string key);
};
#endif
