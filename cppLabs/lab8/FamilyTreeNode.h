//Family Tree Node

#ifndef FAMILYTREENODE
#define FAMILYTREENODE
#include <iostream>

using namespace std;

class FamilyTreeNode{
 public:
  FamilyTreeNode *parent1;
  FamilyTreeNode *parent2;
  FamilyTreeNode(string firstNameIn, string lastNameIn, FamilyTreeNode *parent1, FamilyTreeNode *parent2, int yearIn, int monthIn, int dayIn, char genderIn);
};

#endif
