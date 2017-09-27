#pragma once
#include "tile.h"
class board  
{
public:
	tile tiles[100];
	float endX;
	float endY;
	board();
	virtual void update();
	virtual void draw();
};
