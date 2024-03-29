#include <iostream>
#include "stock.h"

using namespace std;

	Stock::Stock(int monthIn, int dayIn, int yearIn, string stockIn, double opriceIn, double cpriceIn) : month(monthIn), day(dayIn), year(yearIn), stock(stockIn), oprice(opriceIn), cprice(cpriceIn){}

	void Stock:: showAnswers() {
	  std::cout  << "Stock Price for "<< stock << " on " << month << "-" << day << "-" << year << ":" << endl << "   Opening Price: " << oprice << endl << "   Closing Price:" << cprice << endl;
	}

	string Stock::getCSVString() const{
		return to_string(month) + "," + to_string(day) + "," + to_string(year) + ","
    + stock + "," + to_string(oprice) + "," + to_string(cprice) + "\n";
	}
