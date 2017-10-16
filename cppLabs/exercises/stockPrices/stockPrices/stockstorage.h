#ifndef STOCKSTORAGE
#define STOCKSTORAGE
#include <string>
#include <vector>

using namespace std;

class StockStorage{
	public:
		void writeHardCodedStocks();
		vector <Stock> readFromFile();
	private:
		vector<Stock> stocks;
		vector<string> tokenize(string in);
	};
#endif
