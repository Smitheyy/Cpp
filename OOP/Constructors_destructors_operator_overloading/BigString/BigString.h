#include "String.h"


class BigString : public String
{
public:
	BigString() : String() {}	// call constructor
	BigString(const char* text) : String(text) { MakeFirstLetterCapitalised(); }

	void MakeFirstLetterCapitalised();
};

