#include "checkered peacsis.h"
#include "sfwdraw.h"
#include<iostream>
checkersp::checkersp()
{
	
}
bool checkersp::checkCollison()
{
	float dis = (x2 - x) * 2 + (y2 - y) * 2;
	if (dis < radus + radus)
	{

		return true;
	}
	else
	{
		return false;
	}
	checkCollison() == false;
}
void checkersp::update()
{
	float dis = (x2-x)*2+(y2-y)*2;
	if (checkCollison() == true) 
	{
		for (int i = 0; i < 24; i++)
		{
			for (int j = 0; j < 1; j++)
			{



				if (tiles[j].x == sfw::getMouseX())
				{
					if (tiles[j].y == sfw::getMouseY())
					{

					}
				}
			}
		}
	}
		
	//if (sfw::getMouseButton(0) == true) 
	//{
	//	for (int i = 0; i < 24; i++) 
	//	{
	//		for (int j = 0; j < 1; j++) 
	//		{
	//			if (tiles[j].x == sfw::getMouseX())
	//			{
	//				if (tiles[j].y == sfw::getMouseY())
	//				{
	//					/*if (sfw::getMouseButton(0)  == false)
	//					{
	//						sfw::drawCircle(tiles[i].x + 50, tiles[i].y + 50, 20);

	//					}*/
	//				}
	//			}
	//		}
	//		
	//		
	//	}
	//	
	//}
	for (int i = 0; i < 1; i++) {
		for (int j = 0; j < 1; j++) {
			if (sfw::getMouseButton(0) == false)
			{
				sfw::drawCircle(sfw::getMouseX(), sfw::getMouseY(),radus);

			}
		}
	}
}

void checkersp::draw()
{
	float x = 50;
	float y = 50;
	for (int i = 0; i < 12; i++) 
	{
		/*sfw::drawCircle(tiles[i].x, tiles[i].y , 20);*/
		
		sfw::drawCircle(tiles[i].x + x, tiles[i].y + x, radus,12,RED);
		for (int j = 0; j < 12; j++)
		{
			/*sfw::drawCircle(tiles[i].x, tiles[i].y , 20);*/

			sfw::drawCircle(tiles[j].x + x, tiles[j].y + 800 - y - 100, radus, 12, BLACK);
		}
	}
}
