//Driver.cpp for the Payroll System

#include <iostream>
#include "payrollsystem.h"

using namespace std;

int main(){
  int choice;
  string compName = "Ace Peat Moss Inc";
  PayrollSystem ps = PayrollSystem(compName);
  
  do {
    cout << endl <<  "Welcome to " << ps.getCompName() << " Payroll System!"<< endl;
    cout << "Menu: " << endl << "(0) Quit" << endl << "(1) Add Employee" << endl
      << "(2) Remove Employee" << endl << "(3) Records hours for an Employee"
      << endl << "(4) Issue Pay Checks to all Employees"
      << endl << "(5) Show Bookeeping"<< endl;
    cin >> choice;
    
    switch(choice){
      case 1:
        ps.addEmployee("E1345", "John", "Doe", 10.50, 0);
        ps.addEmployee("E1123", "Jane", "Doe", 12.50, 0);
        ps.addEmployee("E1980", "James", "Dean", 15.00, 67);
        ps.addEmployee("E2678", "Genisis", "Haven", 9.50, 0);
        ps.addEmployee("E8797", "Athena", "Rain", 11.00, 86);
        break;
      case 2:
        ps.removeEmployee("E1980");
        ps.removeEmployee("E2678");
        break;
      case 3:
        ps.recordHoursCP("E1123");
        ps.recordHoursCP("E2678");
        ps.recordHoursCP("E1345");
        break;
      case 4:
        ps.issuePaychecks();
        break;
      case 5:
        ps.showEmployees();
        break;
    }


  } while(choice != 0);

  return 0;
}
