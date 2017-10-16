#include <iostream>
#include <fstream>
using namespace std;

/*
ifstream inStream;

inStream.open("file.txt");

//alternately can declare: ifstream inStream("infile.txt");

inStream.close //close stream when no longer in use or else OS will waste memory keeping it alive
//however when program terminates, the open files will auto close
*/

int main(){
  ofstream myFile;
  string filePath;

  cout<< "Enter full fule path: " ;
  cin>> filePath;
  myFile.open(filePath);


  if (myFile.fail()) cout << "myFile open failed!" << endl;
  if(!(myFile.is_open()))cout << "file is not open" << endl;
        else myFile << "The rain in Spain falls mainly on the plain. \n";
  myFile.close();
  return 0;
}

