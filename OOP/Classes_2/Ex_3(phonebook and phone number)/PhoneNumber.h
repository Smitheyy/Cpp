#include<cstring>


class PhoneNumber
{
public:
	char phone_number[20];
	char surname[20];
	char name[12];

public:
	PhoneNumber(const char* num, const char* nam, const char* sur);
};

