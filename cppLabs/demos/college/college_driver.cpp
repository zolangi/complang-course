#include <iostream>
#include "college.h"
 
using namespace std;

int main(){
	int choice;
	string collegeName = "University of Saskatchewan at Moose Jaw"; 
	College c = College(collegeName);
		
	do{
		cout << "Welcome to the " << c.getName() << endl;
		cout << "Enter 0 to quit, 1 to add a department, 2 to add a course, 3 to see the course catalog: " ;
		cin >> choice;
		switch(choice){
			case 1: 
				c.addDepartment();
				break;
			case 2:
				c.addCourse();
				break;
			case 3:
				c.showCatalog();
				break;	
				
			}
		
		
	}while(choice != 0);
	
	return 0;
}
