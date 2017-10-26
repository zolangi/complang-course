#include <ctype.h>
#include <queue>
#include <stack>
#include <cstring>
#include <iostream>
#include <stdio.h>

using namespace std;

char* allAlpha(char* testArray, int size);
void lowerCase(char* testArray, int size);
bool isPalindrome(string palString);


int main(int argc, char const *argv[]) {
  string test = argv[argc-1];
  int size = test.length()+1;
  
  char * testArray = new char[size];
  strcpy(testArray, test.c_str());
  
  char * pStr =  allAlpha(testArray, size);
  string str = &pStr[0];

  if(isPalindrome(str) == true)
    cout << "After evaluation, the test string is a palindrome." << endl;
  else
      cout << "After evaluation, the test string is NOT a palindrome." << endl;
  return 0;
}


char *  allAlpha(char* testArray, int size){
  lowerCase(testArray, size);
  int counter = 0;
  char * temp = new char[size];
  
  for(int i = 0; i < size; i++){
    if(isalpha(testArray[i])){
      temp[counter] = testArray[i];
      counter++;
    }
  }
  return temp;
}

void lowerCase(char* testArray, int size){
  for(int i = 0; i < size; i++){
    char c = testArray[i];
    testArray[i] = tolower(c);
  }
}

bool isPalindrome(string str){
  bool pdome = false;
  int size = str.length();
  int i = 0; //start
  int j = size - 1; //end  

  if(size <= 1) return pdome = true;
  else if(str.at(i) != str.at(j) ) return pdome = false;
  else{
    str = str.substr(1, (size - 2));
    isPalindrome(str);
    return pdome = true;
  }
    
  return pdome;
}


/*
Note that there are other ways to do this, but do it recursively, but stripping the first and last letters in each instance of the function and comparing them for equality.  Make sure the terminatio condition for the recursion works correctly for strings of both odd and even lengths.  Note that you can use negative indices to access items starting with the end of a string or list (eg, my_string[- 1]).  Return a boolean.                                                                                                                                                                                                                                                                                                                                                                                           
Your program does not need to be object oriented.  It should contain a main function that prepares the no-punctuation, all-alphabetic string and calls the recursive function.  The recursive function should take a string as argument and return a boolean.                                                                                                                                                     
*/
