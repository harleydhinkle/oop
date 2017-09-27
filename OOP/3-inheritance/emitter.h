#pragma once
#include "GameObject.h"
#include "particles.h"
class Emitter : public GameObject
{
	float spawnAccumulator;
public:
	Emitter();
	BaseParticle particles[1000];
	int particleId;
	float spawnInterval;
	virtual void update();
	virtual void draw();
};