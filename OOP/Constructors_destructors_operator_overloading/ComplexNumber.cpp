#include <iostream>
#include "ComplexNumber.h"

ComplexNumber::ComplexNumber(const ComplexNumber& cn) {
	re = cn.re;
	im = cn.im;
	name = cn.name;
	is_copied = true;
}

ComplexNumber ComplexNumber::Add(ComplexNumber& cn1) {
	ComplexNumber result(re + cn1.re, im + cn1.im, 'R');
	return result;
}

ComplexNumber ComplexNumber::operator+(const ComplexNumber& cn1) const{
	ComplexNumber result(re + cn1.re, im + cn1.im, 'R');
	return result;
}

void ComplexNumber::DisplayCNum() {
	std::cout << name << ": " << re << " + " << im << 'i' << std::endl;
	std::cout << "is_copied: " << is_copied;
}

ComplexNumber ComplexNumber::operator+(int num) {
	ComplexNumber result(re + num, im, name);
	return result;
}


ComplexNumber operator+(ComplexNumber& cn1, ComplexNumber& cn2) {
	ComplexNumber result(cn1.re + cn2.re, cn1.im + cn2.im, 'R');
	return result;
}

ComplexNumber operator+(int num, ComplexNumber& cn){
	ComplexNumber result(cn.re + num, cn.im, cn.name);
	return result;
}

std::ostream& operator<<(std::ostream& os, const ComplexNumber& cn){
	os << cn.name << '(' << cn.re << '+' << cn.im << "i)";
	return os;
}

std::istream& operator>>(std::istream& is, ComplexNumber& cn) {
	char name_c;
	int re_c, im_c;

	is >> name_c >> re_c >> im_c;
	cn = ComplexNumber(re_c, im_c, name_c);
	

	return is;
}

ComplexNumber& ComplexNumber::operator++() { name++; return *this; }
ComplexNumber ComplexNumber::operator++(int) { 
	ComplexNumber temp = *this;
	name++; 
	return temp;
}