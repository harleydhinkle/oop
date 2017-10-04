#pragma once
#include "board.h"
class checkersp : public board 
{
public:
	checkersp();
	float x = 0;
	float y = 0;
	float radus = 20;
	float x2 = 0.0f;
	float y2 = 0.0f;
	virtual void update();
	virtual void draw();
	bool checkCollison();
};
