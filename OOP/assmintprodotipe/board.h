#pragma once
#include "tile.h"
class board  
{
public:
	tile tiles[100];
	float endX;
	float endY;
	float w;
	float h;
	float x;
	float y;
	board();
	void update();
	void draw();
};
