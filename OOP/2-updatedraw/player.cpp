#include "player.h"
#include "sfwdraw.h"

void player::update()
{
	if(sfw::getKey('W'))
	{
		y ++;
	}
	if (sfw::getKey('S'))
	{
		y--;
	}
	if (sfw::getKey('A'))
	{
		x++;
	}
	if (sfw::getKey('D'))
	{
		x--;
	}
	//if (y >= 800) 
	//{
	//	y = 300;
	//}
	//else if (x >= 800) 
	//{
	//	x = 400;
	//}
	//else
	//{
	//	if (sfw::getKey('W'))
	//	{
	//		y++;
	//	}
	//	if (sfw::getKey('S'))
	//	{
	//		y--;
	//	}
	//	if (sfw::getKey('A'))
	//	{
	//		x++;
	//	}
	//	if (sfw::getKey('D'))
	//	{
	//		x--;
	//	}
	//}
}

void player::draw()
{
	sfw::drawCircle(x, y, 25);
}

void player2::update()
{
	if (sfw::getKey('I'))
	{
		y++;
	}
	if (sfw::getKey('K'))
	{
		y--;
	}
	if (sfw::getKey('J'))
	{
		x++;
	}
	if (sfw::getKey('L'))
	{
		x--;
	}
}

void player2::draw()
{
	sfw::drawCircle(x, y, 25);
}
