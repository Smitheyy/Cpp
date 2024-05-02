#include <iostream>
#include "ComplexNumber.h"

ComplexNumber::ComplexNumber(const ComplexNumber& cn) {	// copy constructor
	re = cn.re;
	im = cn.im;
	name = cn.name;
	is_copied = true;
}

ComplexNumber ComplexNumber::Add(ComplexNumber& cn1) {	// local addition by using a function
	ComplexNumber result(re + cn1.re, im + cn1.im, 'R');
	return result;
}

ComplexNumber ComplexNumber::operator+(const ComplexNumber& cn1) const{	// local addition by using + operator
	ComplexNumber result(re + cn1.re, im + cn1.im, 'R');
	return result;
}

void ComplexNumber::DisplayCNum() {
	std::cout << name << ": " << re << " + " << im << 'i' << std::endl;
	std::cout << "is_copied: " << is_copied;
}

ComplexNumber ComplexNumber::operator+(int num) {	// adding a integer into our object locally
	ComplexNumber result(re + num, im, name);
	return result;
}


ComplexNumber operator+(ComplexNumber& cn1, ComplexNumber& cn2) {	// adding two complex numbers globally
	ComplexNumber result(cn1.re + cn2.re, cn1.im + cn2.im, 'R');
	return result;
}

ComplexNumber operator+(int num, ComplexNumber& cn){	//	adding an integer and a complex number globally
	ComplexNumber result(cn.re + num, cn.im, cn.name);
	return result;
}

std::ostream& operator<<(std::ostream& os, const ComplexNumber& cn){	// displaying complex number with << operator
	os << cn.name << '(' << cn.re << '+' << cn.im << "i)";	
	return os;
}

std::istream& operator>>(std::istream& is, ComplexNumber& cn) {
	char name_c;
	int re_c, im_c;		// declare three local values

	is >> name_c >> re_c >> im_c;	// allow the user to define them
	cn = ComplexNumber(re_c, im_c, name_c);	// create his complex number
	

	return is;
}

ComplexNumber& ComplexNumber::operator++() { name++; return *this; }	// pre-incrementation "++cn1"
ComplexNumber ComplexNumber::operator++(int) { // post-incrementation "cn1++"
	ComplexNumber temp = *this;
	name++; 
	return temp;
}