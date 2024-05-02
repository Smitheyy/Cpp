#include "String.h"
#include <string.h>
#include <iostream>


String::~String() { delete[] writing; }	// deletes dynamically allocated memory by constructor
String::String(const char* text) {
	size = strlen(text);
	writing = new char[size + 1];	// dynamically creates our string
	strcpy_s(writing, size + 1, text);
}


int String::GetSize() { return size; }
String& String::Concatenate(String& str){
	int new_size = size + str.GetSize() + 1;	// creates a new size
	char* new_writing = new char[new_size];		// creates a new table for larger string

	strcpy_s(new_writing, new_size, writing);	// copies the content of this->writing into our new string
	strcat_s(new_writing, new_size, str.writing);	// appends the text from the second string
	delete[] writing;	// deletes this->writing

	writing = new_writing;	// attributes this->writing string with our new concatenated string
	size += str.GetSize();	// stores the size of our concatenated string by summing this->size with the size of the second string

	return *this;	// returns the string for which the method was called
}

void String::DisplayS() {
	for (int i = 0; i < size; i++)
		std::cout << writing[i];
}

String& String::ReverseS() {
	for (int i = 0; i < size / 2; i++) {
		char buffer = writing[i];	
		writing[i] = writing[size - i - 1];		// changing the order of first and last character in current string			
		writing[size - i - 1] = buffer;		
	}

	return *this;	// returns our reversed string 
}

void String::operator*(int n) {

	if (n < 0) {	// you can't display your string a negative amount of times it's senseless
		std::cout << "You can only multiply your string using natural numbers only!";
		exit(1);
	}

	if (n == 0) {	// displays an empty string
		std::cout << ' ';
	}

	if (n == 1) {
		DisplayS();
	}

	if (n > 1) {	// displays a string a given amount of times
		for (int i = 0; i < n; i++)
			DisplayS();
	}	
}

void operator*(int n, String& str) {	// same thing as above function but is meant for a different order of variables (int and String)
	if (n < 0) {
		std::cout << "You can only multiply your string using natural numbers only!";
		exit(1);
	}

	if (n == 0) {
		std::cout << ' ';
	}

	if (n == 1) {
		str.DisplayS();
	}

	if(n > 1){
		for (int i = 0; i < n; i++)
			str.DisplayS();
	}
}

bool String::operator==(String& drugi){		// check whether the strings are the same or not
	if (size != drugi.GetSize()) return false;
	return (strcmp(writing, drugi.writing) == 0);	// strcmp returns 0 when the strings are equal
}

String& String::operator=(String& str) {	// attribute right string contents into the left string
	if (this != &str) {
		delete[] writing;	// deletes this->writing
		size = str.size + 1;	// overwrites the old this->size value with the new size
		writing = new char[size];	// creates a new string
		strcpy_s(writing, size, str.writing);	// copies the contents
	}
	return *this;	// returns the right string as the left one (the're the same now basically)
}

std::ostream& operator<<(std::ostream& os, const String& str) {		// display by overloading << operator
	os << str.writing;
	return os;
}

std::istream& operator>>(std::istream& is, String& str) {	// allow the user to input his own string (>> operator overloading)
 	char in_writing[256];

	is >> in_writing;
	String s(in_writing);
	str = s;
	

	return is;
}