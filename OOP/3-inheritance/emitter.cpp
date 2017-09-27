#include "emitter.h"
#include "sfwdraw.h"
#include "Player.h"
Emitter::Emitter()
{
	for (int i = 0; i < 1000; i++) 
	{
		particles[i].enabled = false;
	}
	spawnAccumulator = 0.0f;
}

void Emitter::update()
{
	spawnAccumulator += sfw::getDeltaTime();
	if (spawnAccumulator > spawnInterval) 
	{
		for (int i = 0; i < 1000; i++)
		{
			if (particles[i].enabled == false) 
			{
				BaseParticle& baby = particles[i];
				baby.x = 400;
				baby.y = 300;
				baby.speedX = 20;
				baby.speedY = 10;
				baby.enabled = true;
				spawnAccumulator = 0.0f;
				break;
			}
		}
	}
	for (int i = 0; i < 1000; i++)
	{
		if (particles[i].enabled) 
		{
			particles[i].update();
		}
	}
}

void Emitter::draw()
{
	for (int i = 0; i < 1000; i++)
	{
		if (particles[i].enabled) 
		{
			particles[i].draw();
		}
	}
}
