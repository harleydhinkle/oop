#include<iostream>
#include "sfwdraw.h"
#include "board.h"
#include "checkered peacsis.h"

int main() 
{
	checkersp cha;
	board bor;
	tile til;
	bor.tiles;
	bor.endX = 0;
	bor.endY = 800;
	/*til.h = til.h / 8;
	til.w = til.w / 8;*/
	til.w = 800 / 8;
	til.h = 800/8;
	til.x = 0;
	til.y = 0;
	/*bor.w = 800 / 8;
	bor.h = 800 / 8;*/
	cha.x = 12;
	cha.y = 0;
	std::cout << "walcome to chackers game" << std::endl;
	sfw::initContext(800, 800, "sfw");
	sfw::setBackgroundColor(BLACK);
	while (sfw::stepContext())
	{
		bor.draw();
		//til.draw();
		cha.draw();
	}
	sfw::termContext();
}