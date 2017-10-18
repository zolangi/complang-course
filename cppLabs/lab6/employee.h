#ifndef EMPLOYEE
#define  EMPLOYEE

#include <iostream>
using namespace std;

class Employee{
 public:
  Employee()= default;
  Employee(string employeeIDIn);
  Employee(string employeeIDIn, string firstNameIn, string lastNameIn, double hourlyWageIn, int hoursWorkedIn);

  string getEmployeeID() const;
  string getFirstName() const;
  string getLastName() const;
  double getHourlyWage() const;
  int getHoursWorked() const;

  void setEmployeeID(string employeeIDIn);
  void setFirstName(string firstNameIn);
  void setLastName(string lastNameIn);
  void setHourlyWage(double hourlyWageIn);
  void setHoursWorked(int hoursWorkedIn);

  double calcPay();
  bool checkDigits(int idNum);
  
 private:
  string employeeID;
  string firstName;
  string lastName;
  double hourlyWage;
  int hoursWorked;
};
#endif
