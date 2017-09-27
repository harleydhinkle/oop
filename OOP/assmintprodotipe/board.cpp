#include "board.h"
#include "sfwdraw.h"
#include "tile.h"
board::board()
{
	for (int i = 0; i < 10; i++)
	{
		tiles[i].y + tiles[i].h;

		for (int j = 0; j < 10; j++)
		{
			tiles[j].y + 10;
		}
	}
}

void board::update()
{

}

void board::draw()
{
	//draw board
	
}


