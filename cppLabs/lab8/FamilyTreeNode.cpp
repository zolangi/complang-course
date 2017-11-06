//Family Tree Node declarations
#include "FamilyTreeNode.h"
using namespace std;

FamilyTreeNode::FamilyTreeNode(string firstNameIn, string lastNameIn,
			       FamilyTreeNode root1, FamilyTreeNode root2,
			       int yearIn, int monthIn, int dayIn, char genderIn):Person(firstNameIn, lastNameIn,
											 yearIn, monthIn, dayIn, genderIn),
										  parent1(root1), parent2(root2) {};

FamilyTreeNode FamilyTreeNode::getParent1() const {return parent1;};
FamilyTreeNode FamilyTreeNode::getParent2() const {return parent2;};

void FamilyTreeNode::setParent1(FamilyTreeNode root1){parent1 = root1;};
void FamilyTreeNode::setParent2(FamilyTreeNode root2){parent2 = root2;};
