#include <iostream>


class ComplexNumber
{

public:
	ComplexNumber(int re_ = 0, int im_ = 0, char name_ = ' ') : re(re_), im(im_), name(name_), is_copied(false) {}
	ComplexNumber(const ComplexNumber& cn);

	ComplexNumber Add(ComplexNumber& cn1);
	void DisplayCNum();

	ComplexNumber operator+(const ComplexNumber& cn1) const;
	ComplexNumber operator+(int num);
	ComplexNumber& operator++();
	ComplexNumber operator++(int);


	friend std::ostream& operator<<(std::ostream& os, const ComplexNumber& cn);
	friend std::istream& operator>>(std::istream& is, ComplexNumber& cn);
	friend ComplexNumber operator+(int num, ComplexNumber& cn);
	friend ComplexNumber operator+(ComplexNumber& cn1, ComplexNumber& cn2);

private:
	int re, im;
	char name;
	bool is_copied;

};