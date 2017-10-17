#include <iostream>
#include "payrollsystem.h"
#include "employee.h"
#include "paycheck.h"

using namespace std;

string PayrollSystem::getCompName(){return compName;}
void PayrollSystem::setCompName(compNameIn){compName=compNameIn;}

void PayrollSystem::addCompany(string compName){
  companies.push_back(Company(compName));
};

void PayrollSystem::addEmployee(string employeeIDIn, string firstNameIn, string lastNameIn, double hourlyWageIn, int hoursWorkedIn){
  string compName = "Ace Peat Moss Inc";

  int compIndex = findCompany(compName);
  if (compIndex==-1) {
    cout << "Sorry, the company you entered does not exist." << endl;
  }
  else{
      companies[compIndex].createEmployee(employeeIDIn, firstNameIn, lastNameIn, hourlyWageIn, hoursWorkedIn);
  }
};

void PayrollSystem::removeEmployee(string employeeID);
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

  for (int i = 0; i < list.size(); i++) {
			if (id == list.get(i).getiD()) {
				list.get(i).setHour(hours);
			}
		}
};

void PayrollSystem::issuePaychecks(){
  
}

void PayrollSystem::showEmployees(){
  string ret;
  for(Company c:: companies){
    cout << "Payroll for " << c.getCompName() << " :"<< endl;
    /*for(Employee e: c.getEmployees()){

    }*/
  }
};

int PayrollSystem::findCompany(string key){
  for(int i = 0; i < (int) companies.size; i++){
    if (companies[i].getCompName() == key) {return i;}
  }
  return -1;
}

int PayrollSystem::findEmployee(string key){
  for(int i = 0; i < (int) employees.size; i++){
    if (employees[i].getEmployeeID() == key) {return i;}
  }
  return -1;
}
