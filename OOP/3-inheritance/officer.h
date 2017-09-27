#pragma once
#include "Person.h"
#include <iostream>
class officer : public Person
{
protected:
	int badgeNumber;
public:
	officer();
	officer(std::string initialname, int initialHappyiness, int iniBadgenumber);
	void greet();
};