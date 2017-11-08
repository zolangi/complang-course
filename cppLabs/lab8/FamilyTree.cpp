#include "FamilyTree.h"
using namespace std;
class FamilyTree{
 public:
  FamilyTreeNode *parent1;
  FamilyTreeNode *parent2;
  vector<Person *> children;
  FamilyTree(string familyNameIn, FamilyTreeNode *parent1, FamilyTreeNode *parent2);
 private:
  string familyName;
};

FamilyTree::FamilyTree(string familyNameIn, FamilyTreeNode *root1, FamilyTree *root2): familyName(familyNameIn), parent1(root1), parent2(root2){};
