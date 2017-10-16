#include <iostream>
#include "college.h"
#include "course.h"

using namespace std;

College::College(string nameIn) :name(nameIn)  {} 

string College::getName(){return name;}

void College::showCatalog(){
	string ret;
	for(Department d: departments){
		cout << d.getName() << ":" << endl;
		for(Course c: d.getCourses())
			cout << c.getCourseInfo() << endl;
	}
}	

void College::addDepartment(){
	string name;
	cout << "What is the name of the department you would like to add? ";
	cin.ignore(1000, '\n');
	getline(cin, name);
	departments.push_back(Department(name));
};

void College::addCourse(){
	string deptName;
	string courseName;
	int courseNum;	
	
	cout << "Which department will offer the course? ";
	cin.ignore(1000, '\n');
	getline(cin, deptName);
	
	int deptIndex = findDepartment(deptName);
	if(deptIndex == -1) cout << "Sorry, we don't have a department of " << deptName << endl;
	else{  
		cout << "What is the course number? ";
		cin >> courseNum;
		cout << "What is the name of the course? ";
		cin.ignore(1000, '\n');
		getline(cin, courseName);
		
		departments[deptIndex].createCourse(courseNum, courseName);
	}
};



int College::findDepartment(string key){
	for(int i = 0; i < (int) departments.size(); i++)
		if(departments[i].getName() == key) return i;
	return -1;	
}	
