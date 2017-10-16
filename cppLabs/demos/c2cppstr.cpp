//Converting cstrings to c++ strings

#include <cstring> 
#include <string>

using namespace std;

int main(){
	char cString[] = "the Earth is flat";
	string cppString;	
	
	cppString = cString;						// ok
	
//	cString = cppString;						// error
	strncpy(cString, cppString.c_str(), 30);	// ok
		
	return 0;
}
