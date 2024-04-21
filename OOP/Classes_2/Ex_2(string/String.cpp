#include "String.h"
#include<iostream>
#include<cstring>
using namespace std;


String::String() { text[0] = '\0'; }
String::String(const char* str) {
	if (strlen(str) > max_length) {
		cout << "You have exceeded the maximum length of your string!";
		text[0] = '\0';
	}

	else {
		strcpy(text + 1, str);
		text[0] = strlen(str);
	}	
}

int String::LengthOfString() { return text[0]; }
String String::CutString(int beggining, int length) {
	if (beggining < 0 || beggining >= text[0]) {
		cout << "Incorrect starting position of your cut!";
		return String();
	}

	String cuttedstring;

	int cut_length = min(length, text[0] - beggining);
	strncpy(cuttedstring.text + 1, text + beggining + 1, cut_length);

	cuttedstring.text[0] = cut_length;

	return cuttedstring;
}

String String::FoldingString(String second) {
	if (text[0] + second.text[0] > max_length) {
		cout << "The maximum length of string chain has been exceeded!";
		return String();
	}

	String foldedstring;
	strcpy(foldedstring.text + 1, text + 1);
	strcpy(foldedstring.text + 1 + text[0], second.text + 1);

	foldedstring.text[0] = text[0] + second.text[0];
	
	return foldedstring;
}

void String::DisplayString() {
	for (int i = 0; i <= text[0]; i++)
		cout << text[i];
	cout << endl;
}