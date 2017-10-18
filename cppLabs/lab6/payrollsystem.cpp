#include <iostream>
#include "payrollsystem.h"
#include "employee.h"
#include "paycheck.h"

using namespace std;

PayrollSystem::PayrollSystem(string compNameIn):compName(compNameIn){};

string PayrollSystem::getCompName() const{return compName;};

vector<Employee> PayrollSystem::getEmployees() const{return employees;};


void PayrollSystem::addEmployee(string employeeIDIn, string firstNameIn, string lastNameIn, double hourlyWageIn, int hoursWorkedIn){
  employees.push_back(Employee(employeeIDIn, firstNameIn, lastNameIn, hourlyWageIn, hoursWorkedIn));
};

void PayrollSystem::removeEmployee(string employeeID){
  int emplIndx = findEmployee(employeeID);
  if(emplIndx == -1){
    cout << "Sorry, that employee does not exist." << endl;
  } else{
    employees.erase(employees.begin()+emplIndx);
  }
};

void PayrollSystem::recordHoursCP(string employeeID){
  int emplIndex = findEmployee(employeeID);
  if (emplIndex == -1) {
    cout << "Sorry, that employee does not exist. " << endl;
  } else {
    int hoursWorked;
    cout << "Please enter the # of hours worked by Employee#" << employeeID << endl;
    cin >> hoursWorked;
    employees[emplIndex].setHoursWorked(hoursWorked);
  }
};

void PayrollSystem::issuePaychecks(){
  double payAmount;
  string employeeID;
  string firstName;
  string lastName;

  for(int index = 0; index < (int) employees.size(); index++){
    payAmount = employees[index].calcPay();
    employeeID = employees[index].getEmployeeID();
    firstName = employees[index].getFirstName();
    lastName = employees[index].getLastName();
    Paycheck pc = Paycheck(employeeID, firstName, lastName, payAmount);
    pc.toString();

    pc.setPayAmount(0);
  }

}

void PayrollSystem::showEmployees(){
  string ret;
  cout << "Payroll for " << compName << ":"<< endl;
  
  for(Employee e: employees){
    cout << "Employee #" << e.getEmployeeID() << endl
	 << "\t" << e.getFirstName() << " " << e.getLastName() << endl
	 << "\tSalary: $" << e.getHourlyWage() << endl;
  }
};

int PayrollSystem::findEmployee(string key){
  for(int i = 0; i < (int) employees.size(); i++){
    if (employees[i].getEmployeeID()  == key) {return i;}
  }
  return -1;
}
