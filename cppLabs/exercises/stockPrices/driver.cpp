#include <iostream>
#include <fstream>
#include <vector>
#include "stock.h"
#include "stockstorage.h"

using namespace std;


int main(){
	int choice;
	StockStorage s;
	cout << "Enter 1 to write to file, 2 to read from file " << endl;
	cin >> choice;
	if(choice == 1) s.writeHardCodedStocks();
	if(choice == 2)
		for(Stock sk: s.readFromFile())
			sk.showAnswers();
	return 0;

}
