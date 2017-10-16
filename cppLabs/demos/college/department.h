#ifndef DEPARTMENT
#define DEPARTMENT

#include <vector>
#include <string>
#include "course.h"

using namespace std;


class Department{
	public:
		Department(string name);
		string getName() const;
		vector<Course> getCourses() const;
		void createCourse(int courseNumIn, string coursenameIn);
	
	private:
		string name;
		vector <Course> courses;

};
#endif
