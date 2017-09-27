#include "particles.h"
#include"sfwdraw.h"
BaseParticle::BaseParticle()
{

}

void BaseParticle::update()
{
	x += speedX;
	y += speedY;
}

void BaseParticle::draw()
{
	sfw::drawCircle(x, y, 7);
}

void BoxParticle::draw()
{
	float halfY = dimY / 2.0f;
	float halfX = dimX / 2.0f;
	sfw::drawLine(x - halfX, y - halfY,x - halfX, y + halfY);
	sfw::drawLine(x + halfX, y - halfY, x + halfX, y + halfY);
	sfw::drawLine(x - halfX, y + halfY, x + halfX, y + halfY);
	sfw::drawLine(x - halfX, y - halfY, x + halfX, y - halfY);
}
