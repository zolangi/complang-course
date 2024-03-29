#include <iostream>
#include <fstream>
#include <vector>

#include "stock.h"
#include "stockstorage.h"

using namespace std;


void StockStorage::writeHardCodedStocks(){
	ofstream myFile;
	string filePath;
	string line;
	vector<Stock> stocks;

	Stock firstStock (10,30,2015,"APPL", 3000.32, 4500.28);
	Stock secondStock (5,10,2005,"GGL", 50000.87, 800384.23);
	Stock thirdStock (7,23,2045,"FBK", 200.54, 100.01);
	Stock fourthStock (2,14,1945,"AMZ", 500.54, 84567.91);
	Stock fifthStock (1,1,2011,"MOFF", 879340.67, 4503.23);

	stocks.push_back(firstStock);
	stocks.push_back(secondStock);
	stocks.push_back(thirdStock);
	stocks.push_back(fourthStock);
	stocks.push_back(fifthStock);

	cout << "Enter full file path: " ;
	cin >> filePath;
	myFile.open(filePath);

	for(Stock k: stocks)
		myFile << k.getCSVString();
	myFile.close();
}

vector <Stock> StockStorage::readFromFile(){
	ifstream myFile;
	string filePath;
	string line;

	int month, day, year;
	string stock;
	double oprice, cprice;

	vector<string> tokens;

	cout << "Enter full file path: " ;
	cin >> filePath;
	myFile.open(filePath);

	if(myFile.is_open()){
		while(getline(myFile, line)){

			tokens = tokenize(line);
			month = stoi(tokens[0]);
			day = stoi(tokens[1]);
			year = stoi(tokens[2]);
			oprice = stod(tokens[4]);
			cprice = stod(tokens[5]);

			Stock k(month, day, year, tokens[3], oprice, cprice);
			stocks.push_back(k);
			if(myFile.eof()) cout << "reached eof" << endl;
		}
		cout << stocks.size() << endl;

		myFile.close();
	}
	else cout << "File open failed" << endl;
	cout << stocks.size() << endl;
	return stocks;

}

vector<string> StockStorage::tokenize(string in){
	// http://oopweb.com/CPP/Documents/CPPHOWTO/Volume/C++Programming-HOWTO-7.html
	vector<string> tokens;
	const string delimiter = ",";

	string::size_type lastPos = in.find_first_not_of(delimiter, 0);

    // Find first "non-delimiter".
    string::size_type pos     = in.find_first_of(delimiter, lastPos);

    while (string::npos != pos || string::npos != lastPos)
    {
        // Found a token, add it to the vector.
        tokens.push_back(in.substr(lastPos, pos - lastPos));
        // Skip delimiters.  Note the "not_of"
        lastPos = in.find_first_not_of(delimiter, pos);
        // Find next "non-delimiter"
        pos = in.find_first_of(delimiter, lastPos);
    }
    return tokens;
}
