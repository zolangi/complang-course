#ifndef PDFTEXTEXTRACTOR
#define PDFTEXTEXTRACTOR

#include <string>
#include <vector>

using namespace std;


class PdfTextExtractor{
	public:
		vector<string> extract(char *filename); 
		vector<string> tokenize(string in);
		
};
#endif
