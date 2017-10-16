#include <iostream>  // iostream includes string
 
using namespace std;

int main(){
	string line;
	int n;
	cin >> n;
	cin.ignore(1000, '\n');
	getline(cin, line);
	cout << n << " " + line << endl;

	return 0;
}
