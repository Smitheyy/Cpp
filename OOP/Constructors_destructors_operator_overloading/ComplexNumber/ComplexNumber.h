#include <iostream>


class ComplexNumber
{

public:
	ComplexNumber(int re_ = 0, int im_ = 0, char name_ = ' ') : re(re_), im(im_), name(name_), is_copied(false) {}	// copy construcotr
	ComplexNumber(const ComplexNumber& cn);	

	ComplexNumber Add(ComplexNumber& cn1);	// adds two complex numbers and returns a complex number as a result
	void DisplayCNum();

	ComplexNumber operator+(const ComplexNumber& cn1) const;	// does the same thing as Add func but fancier since you can add two obj like this 'cn1 + cn2'
	ComplexNumber operator+(int num);	// adds an integer into the complex number and returns the result as yet another complex number
	ComplexNumber& operator++();	// pre-incrementation (increments your number's name if its A than its gonna be B next etc.)
	ComplexNumber operator++(int);	// post-incrementation


	friend std::ostream& operator<<(std::ostream& os, const ComplexNumber& cn);	// displays a complex number by overloading << operator
	friend std::istream& operator>>(std::istream& is, ComplexNumber& cn);	// allows the user to create his own complex number by input
	friend ComplexNumber operator+(int num, ComplexNumber& cn);	// different order of  variables (operator+(int num))
	friend ComplexNumber operator+(ComplexNumber& cn1, ComplexNumber& cn2);	// adds two complex numbers by using a global function

private:
	int re, im;
	char name;	// class variables
	bool is_copied;

};