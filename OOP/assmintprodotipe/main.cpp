#include<iostream>
#include "sfwdraw.h"
#include "board.h"
#include "checkered peacsis.h"

int main() 
{
	checkersp cha[24];
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
	//cha.x = 12;
	//cha.y = 0;

	for (int i = 0; i < 6; i++)
	{
		cha[i].x = 50 + i *100;
		cha[i].y = 50;
		cha[i].radus =20;

	}
	for (int i = 0; i < 6; i++)
	{
		
		cha[i+6].x = 50 + i * 100;
		cha[i+6].y = 150;
		cha[i+6].radus = 20;

	}
	for (int i = 0; i < 6; i++)
	{
		cha[i+12].x = 50 + i * 100;
		cha[i+12].y = 750;
		cha[i+12].radus = 20;

	}
	for (int i = 0; i < 6; i++)
	{

		cha[i + 18].x = 50 + i * 100;
		cha[i + 18].y = 650;
		cha[i + 18].radus = 20;

	}

	std::cout << "walcome to chackers game" << std::endl;
	sfw::initContext(800, 800, "sfw");
	sfw::setBackgroundColor(BLUE);
	while (sfw::stepContext())
	{
		bor.draw();
		//til.draw();
		for (int i = 0; i < 24; i++)
		{
			cha[i].draw();
			cha[i].update();
		}
		//cha[til.x].update();
		//cha.draw();
		//cha.update();
		//cha.checkCollison();
		sfw::drawCircle(sfw::getMouseX(), sfw::getMouseY(), 20);
		/*sfw::drawCircle(150, 750, 20, 12, RED);*/
	}
	sfw::termContext();
}