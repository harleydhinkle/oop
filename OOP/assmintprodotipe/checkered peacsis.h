#pragma once
#include "board.h"
class checkersp : public board 
{
public:
	checkersp();
	float x = 0;
	float y = 0;
	virtual void update();
	virtual void draw();

};
