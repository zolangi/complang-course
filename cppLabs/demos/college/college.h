#ifndef COLLEGE
#define COLLEGE

#include <vector>
#include <string>
#include "department.h"

using namespace std;

class College{
	public:
		College(string nameIn);
		string getName();
		void showCatalog();	
		void addDepartment();
		void addCourse();	
		
	private:
		string name;
		vector <Department> departments;	
		int findDepartment(string key);
};
#endif
