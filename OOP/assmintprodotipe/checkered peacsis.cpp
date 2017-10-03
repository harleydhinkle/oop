#include "checkered peacsis.h"
#include "sfwdraw.h"
checkersp::checkersp()
{
	for (int i = 0; i < 24; i++) 
	{
		x = tiles[i].x;
		y = tiles[i].y;

	}
}

void checkersp::update()
{
}

void checkersp::draw()
{
	float x = 50;
	float y = 50;
	for (int i = 0; i < 24; i++) 
	{
		/*sfw::drawCircle(tiles[i].x, tiles[i].y , 20);*/
		sfw::drawCircle(tiles[i].x+x, tiles[i].y +x, 20);
	}
}