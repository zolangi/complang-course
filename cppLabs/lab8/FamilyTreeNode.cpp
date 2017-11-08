//Family Tree Node declarations
#include "FamilyTreeNode.h"
#include "person.h"

using namespace std;

FamilyTreeNode::FamilyTreeNode(string firstNameIn, string lastNameIn,
			       FamilyTreeNode *root1, FamilyTreeNode *root2,
			       int yearIn, int monthIn, int dayIn, char genderIn):Person(firstNameIn, lastNameIn,
											 yearIn, monthIn, dayIn, genderIn),
										  parent1(root1), parent2(root2) {};
