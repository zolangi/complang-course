//Family Tree Node

#ifndef FAMILYTREENODE
#define FAMILYTREENODE
#include <iostream>
#include "person.h"
using namespace std;

class FamilyTreeNode : public Person {
 public:
  FamilyTreeNode(string firstNameIn, string lastNameIn, FamilyTreeNode root1, FamilyTreeNode root2, int yearIn, int monthIn, int dayIn, char genderIn);
 private:
  FamilyTreeNode parent1;
  FamilyTreeNode parent2;
};

#endif
