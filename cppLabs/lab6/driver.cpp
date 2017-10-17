//Driver.cpp for the Payroll System

#include <iostream>
#include "payrollsystem.h"

using namespace std;

int main(){
  int choice;
  PayrollSystem ps = PayrollSystem();
  do {
    cout << "Menu: " << endl << "(0) Quit" << endl
      << "(1) Add Company" << endl << "(2) Add Employee"
      << "(3) Remove Employee" << endl << "(4) Records hours for an Employee"
      << endl << "(5) Issue Pay Checks to all Employees"
      << endl << "(6) Show Bookeeping"<< endl;

    switch (choice) {
      case 1:
        ps.addCompany("Ace Peat Moss Inc");
        break;
      case 2:
        ps.addEmployee("E1345", "John", "Doe", 10.50, 0);
        ps.addEmployee("E1123", "Jane", "Doe", 12.50, 0);
        ps.addEmployee("E1980", "James", "Dean", 15.00, 67);
        ps.addEmployee("E2678", "Genisis", "Haven", 9.50, 0);
        ps.addEmployee("E8797", "Athena", "Rain", 11.00, 86);
        break;
      case 3:

        break;
      case 4:
      ps.recordHoursCP("E1123");
      ps.recordHoursCP("E2678");
      ps.recordHoursCP("E1345");
        break;
      case 5:
      
        break;
      case 6:
        break;
    }


  } while(choice != 0);
}
