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
		x--;
	}
	if (sfw::getKey('D'))
	{
		x++;
	}
	if (x > 800) 
	{
		x = 0;
	}
	else if (x < 0) 
	{
		x = 800;
	}
	if (y < 0) 
	{
		y = 600;
	}
	else if (y > 600) 
	{
		y = 0;
	}
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
		x--;
	}
	if (sfw::getKey('L'))
	{
		x++;
	}
	if (x > 800)
	{
		x = 0;
	}
	else if (x < 0)
	{
		x = 800;
	}
	if (y < 0)
	{
		y = 600;
	}
	else if (y > 600)
	{
		y = 0;
	}
}

void player2::draw()
{
	sfw::drawCircle(x, y, 25);
}
