#pragma once
#include "board.h"
class checkersp : public board 
{
public:
	checkersp();
	float x;
	float y;
	float radus = 20;
	
	virtual void update();
	virtual void draw();
	bool checkCollison(float otherX, float otherY, float otherRadius);
};
