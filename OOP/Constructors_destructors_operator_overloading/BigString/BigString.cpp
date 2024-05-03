#include "BigString.h"


void BigString::MakeFirstLetterCapitalised() {
	if (GetSize() > 0 && GetFirstCharacter() >= 'a' && GetFirstCharacter() <= 'z')
		ChangeToCapitalised();	// convert lowercase to uppercase
}