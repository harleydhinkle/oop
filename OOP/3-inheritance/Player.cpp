#include "Player.h"
#include"sfwdraw.h"
Player::Player()
{
}
void Player::update()
{
	if (sfw::getKey('W'))
	{
		y++;
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

void Player::draw()
{
	sfw::drawCircle(x, y, 25);
}
