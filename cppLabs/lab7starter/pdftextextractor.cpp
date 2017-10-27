#include <iostream>
#include <podofo/podofo.h>
#include <string>
#include <algorithm>

#include "pdftextextractor.h"

using namespace PoDoFo;
using namespace std;


bool is_not_word_char(const char a) {
	if (isalpha(a))
		return false;
	if(a=='-') return false;
	return true;
}

vector<string> PdfTextExtractor::extract(char * filename) {
	// heavily adapted from http://stackoverflow.com/questions/11715561/pdf-parsing-in-c-podofo/11719431#11719431
	PdfMemDocument pdf(filename);
	string text;
	//Iterate over each page:
	for (int pn = 0; pn < pdf.GetPageCount(); ++pn) {
	
		PoDoFo::PdfPage* page = pdf.GetPage(pn);
		
		// Iterate over all the PDF commands on that page:
		PoDoFo::PdfContentsTokenizer tok(page);
		const char* token = nullptr;
		PoDoFo::PdfVariant var;
		PoDoFo::EPdfContentsType type;

		while (tok.ReadNext(type, token, var)) {
			
			if (type == PoDoFo::ePdfContentsType_Keyword) {
				// process type, token & var

				if (var.IsString()) {
					string s = var.GetString().GetStringUtf8();
					transform(s.begin(), s.end(), s.begin(), ::tolower);
					text.append(s);

				}

				if (strcmp(token, "TJ") == 0) {
					PoDoFo::PdfArray& a = var.GetArray();
					for (size_t i = 0; i < a.GetSize(); ++i) {
						if (a[i].IsString()) {
							text.append(a[i].GetString().GetStringUtf8());
						}
					}

				}
			}
		text.append(" ");
			
		}
	}
	return tokenize(text);
}
vector<string> PdfTextExtractor::tokenize(string in) {
	// http://oopweb.com/CPP/Documents/CPPHOWTO/Volume/C++Programming-HOWTO-7.html
	vector<string> tokens;
	string delimiter = " ";

	string::size_type lastPos = in.find_first_not_of(delimiter, 0);

	// Find first "non-delimiter".
	string::size_type pos = in.find_first_of(delimiter, lastPos);

	while (string::npos != pos || string::npos != lastPos) {
		// Found a token, add it to the vector.
		tokens.push_back(in.substr(lastPos, pos - lastPos));
		// Skip delimiters.  Note the "not_of"
		lastPos = in.find_first_not_of(delimiter, pos);
		// Find next "non-delimiter"
		pos = in.find_first_of(delimiter, lastPos);
	}
	// trim tokens
	vector<string> stripped;
	for (string s : tokens) {
		s.erase(remove_if(s.begin(), s.end(), (int (*)(int)) is_not_word_char), s.end());
		stripped.push_back(s);
	}
	return stripped;
}



