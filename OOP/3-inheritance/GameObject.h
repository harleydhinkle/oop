#pragma once
#include <string>
class GameObject
{
public:
	std::string name;

	bool enabled;
	GameObject(std::string Name);
	GameObject();
	virtual void update();
	virtual void draw();
};