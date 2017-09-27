#include<iostream>
#include "sfwdraw.h"
#include "board.h"
int main() 
{
	board bor;
	tile til;
	bor.tiles;
	bor.endX = 0;
	bor.endY = 100;
	til.h = 10;
	til.w = 10;
	til.x = 0;
	til.y = 0;
	sfw::initContext(100, 100, "sfw");
	sfw::setBackgroundColor(BLACK);
	while (sfw::stepContext())
	{
		bor.draw();
		til.draw();

	}
	sfw::termContext();
}