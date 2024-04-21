#include"PhoneNumber.h"
#include<cstring>


class PhoneBook
{
	static int counter;
	static const int maximum_amount_of_numbers = 50;
	PhoneNumber numbers[maximum_amount_of_numbers];

public:
	PhoneBook();
	void AddNumber(PhoneNumber number);
	void DeleteNumber(const char* number);
	void SearchBySurname(const char* sur);
	static int DownloadCounter();
};

