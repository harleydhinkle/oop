#pragma once
#include "GameObject.h"
class BaseParticle : public GameObject
{
public:
	float x;
	float y;

	float speedX;
	float speedY;
	BaseParticle();
	virtual void update() override;
	virtual void draw() override;
};
class BoxParticle : public BaseParticle
{
public:
	float dimX;
	float dimY;
	virtual void draw() override;
};