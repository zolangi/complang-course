//Console Input w/ cin

#include <iostream> 

using namespace std;

int main(){
	int x;
	double y;
	char z;

	std::cout << "enter an int, a double, and a char" << endl;
	std::cin >> x >> y >> z;
	std::cout << "your int: " << x << "; your double: " << y << "; your char: " << z << endl;

	return 0;	
}
