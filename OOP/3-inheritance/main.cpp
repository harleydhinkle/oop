#include "Person.h"
#include "Player.h"
#include "particles.h"
#include "sfwdraw.h"
#include "emitter.h"
#include <iostream>
int main() 
{
	
	Person me("Harley Hinkle", 90);
	me.greet();
	me.isHappy();
	Player me2;
	me2.x = 400;
	me2.y = 300;
	BaseParticle p;
	p.x = 400;
	p.y = 300;
	p.speedX = 2;
	p.speedY = -3;
	BoxParticle box;
	box.speedX = -1;
	box.speedY = -0.5f;
	box.x = 700;
	box.y = 500;
	box.dimX = 20;
	box.dimY = 30;
	Emitter emitter;
	emitter.spawnInterval = 3.0f;
	
	sfw::initContext(800, 600, "sfw");
	sfw::setBackgroundColor(BLACK);
	while (sfw::stepContext())
	{
		emitter.update();
		emitter.draw();
		me2.draw();
		me2.update();
		p.draw();
		p.update();
		box.draw();
		box.update();
	}
	sfw::termContext();
	while (true) {}
	return 0;
}