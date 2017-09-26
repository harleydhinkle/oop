#include <iostream>
#include "sfwdraw.h"
#include "player.h"
#include "circle.h"
#include "line.h"
#include "box.h"
int main() 
{
	player me;
	me.x = 400;
	me.y = 300;
	player2 you;
	you.x = 300;
	you.y = 400;
	Circle circle;
	circle.radius = 50;
	circle.posX = 400;
	circle.posY = 400;
	Line STRAIGHT;
	STRAIGHT.startX = 400;
	STRAIGHT.startY = 400;
	STRAIGHT.endX = 400;
	STRAIGHT.endY = 0;
	Box rect;
	rect.bottomlaftX = 100;
	rect.bottomlaftY = 100;
	rect.topRightX = 200;
	rect.topRightY = 300;
	//creat a winfow and drawing context
	sfw::initContext(800, 600, "sfw");
	sfw::setBackgroundColor(BLUE);
	while (sfw::stepContext())
	{
		//game code goes here
		//sfw::drawCircle(400, 300, 70);
		me.update();
		me.draw();
		you.update();
		you.draw();
		circle.draw();
		circle.posX++;
		STRAIGHT.draw();
		rect.draw();
	}
	sfw::termContext();

}