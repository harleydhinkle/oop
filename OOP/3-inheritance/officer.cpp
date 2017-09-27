#include "officer.h"
#include <iostream>
officer::officer()
{
	fullName = "";
	happiness = 50;
	badgeNumber = 0;
}

officer::officer(std::string initialname, int initialHappyiness, int iniBadgenumber)
{
	fullName = initialname;
	happiness = initialHappyiness;
	badgeNumber = iniBadgenumber;
}

void officer::greet()
{
	Person::greet();
	std::cout << "officer naumber #" << badgeNumber << "." << std::endl;
}
