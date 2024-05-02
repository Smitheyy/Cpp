#include <string.h>
#include <iostream>


class String
{
private:
	int size;
	char* writing;

public:
	~String();	// destructor
	String() : size(0), writing(nullptr) {}
	String(const char* text);							// constructors
	String(const String& str) : size(str.size), writing(new char[size + 1]) { strcpy_s(writing, size + 1, str.writing); }	// copy constructor

	int GetSize();	
	String& Concatenate(String& str);	// combines two strings into a larger string	
	void DisplayS();	
	String& ReverseS();	// reverses the order of characters in a string

	void operator*(int n);	// displays our string a given amount of times (ex. s1 * 5)
	bool operator==(String& drugi);		// checks whether strings are equal to one another		// operator functions
	String& operator=(String& str);	// attributes the contents of right string into the left one


	friend void operator*(int n, String& str);	// different order of variables (ex.5 * s1)
	friend std::ostream& operator<<(std::ostream& os, const String& str);	// displays a string using cout		// friend functions
	friend std::istream& operator>>(std::istream& is, String& str);	// allows the user to create his string object by input
};

