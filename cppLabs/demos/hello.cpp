// note that the include syntax omits the .h and that *the 
// files included* are not the same ones as in C

#include <iostream> 
#include <string>
using namespace std;

// C++ usually doesn’t explicitly list void in parameter lists.
int main(){			 
	string name;
	std::cout << "What is your name? ";
	std::cin >> name;
	std::cout << "Hello, " + name + "\n";
	return 0;	
}
