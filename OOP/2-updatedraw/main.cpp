#include <iostream>
#include "sfwdraw.h"
#include "player.h"
#include "circle.h"
int main() 
{
	player me;
	me.x = 400;
	me.y = 300;
	player2 you;
	you.x = 300;
	you.y = 400;
	Circle circle;
	circle.radius;
	circle.posX;
	circle.posY;
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
	}
	sfw::termContext();

}