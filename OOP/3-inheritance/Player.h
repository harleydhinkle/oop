#pragma once
#include "GameObject.h"
class Player : public GameObject
{
public:
	float x;
	float y;
	Player();
	virtual void update() override;
	virtual void draw() override;
};