#include <iostream>
#include <fstream>

using namespace std;

int main(){
	ifstream myFile;
	string filePath;
	string line;
	
	cout << "Enter full file path: " ;
	cin >> filePath;
	myFile.open(filePath);
	if(myFile.is_open()){
		while(!myFile.eof()){				// eof() returns a boolean end-of-file indicator
			getline(myFile, line);
			cout << line << endl;
		}
	}
	else cout << "File open failed" << endl;
	myFile.close();
	return 0;
}
