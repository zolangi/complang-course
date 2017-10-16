#ifndef STOCK
#define STOCK
#include <string>
#include <vector>

using namespace std;

class Stock{

	public:
		Stock(int monthIn, int dayIn, int yearIn, string stockIn, double opriceIn, double cpriceIn);
		void showAnswers();
		string getCSVString() const;

	private:
		int month;
    int day;
    int year;
		string stock;
		double oprice;
		double cprice;
};

#endif
