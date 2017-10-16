#include "department.h"

using namespace std;

Department::Department(string nameIn):name(nameIn) {} 

string Department::getName() const {return name;}

vector<Course> Department::getCourses() const{ return courses;}	

void Department::createCourse(int courseNumIn, string courseNameIn){
	courses.push_back(Course(courseNumIn, courseNameIn));
	
};
