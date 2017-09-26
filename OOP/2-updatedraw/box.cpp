#include "box.h"
#include "sfwdraw.h"
void Box::draw()
{
	sfw::drawLine(bottomlaftX, bottomlaftY, topRightX, bottomlaftY);
	sfw::drawLine(bottomlaftX, bottomlaftY, bottomlaftX, topRightY);
	sfw::drawLine(bottomlaftX, topRightY, topRightX, topRightY);
	sfw::drawLine(topRightX, topRightY, topRightX, bottomlaftY);
}
