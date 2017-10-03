#include "tile.h"
#include "sfwdraw.h"
tile::tile()
{
}


void tile::draw()
{
	//draw tiles for each think
	sfw::drawLine(x, y, x, y + h);
	sfw::drawLine(x, y, x + w, y);
	sfw::drawLine(x, y + h, x + w, y + h);
	sfw::drawLine(x + w, y, x + w, y + h);
}
//tiles[i].w = j*w;
//tiles[i].h = y;
//tiles[i].y = j*h;
//tiles[i].x = x;