#include "board.h"
#include "sfwdraw.h"
board::board()
{
	h = 800 / 8;
	w = 800 / 8;
	x = 0;
	y = 0;
	for (int i = 0; i < 9; i++)
	{
		float y = i * h;
		float x = i *w;

		for (int j = 0; j < 9; j++)
		{

			tiles[j+(i*9)].x = j*w;
			tiles[j + (i * 9)].y = y;
			/*tiles[j + (i * 9)].w = j*w;
			tiles[j + (i * 9)].h = x;*/
			/*tiles[i].w = j*h;
			tiles[i].h = y;
			tiles[i].y = j*w;
			tiles[i].x = x;*/
		}
	}
}

void board::update()
{

}

void board::draw()
{
	//draw board
	for (int i = 0; i < 100; i++)
	{
		tiles[i].draw();
	}
	
}


