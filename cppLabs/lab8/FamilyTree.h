#ifndef FAMILYTREE
#define FAMILYTREE

#include <iostream>
using namespace std;

class FamilyTree{
 public:
  void printAllNodes(FamilyTree *tree);
 private:
  string familyName;
};

#endif
