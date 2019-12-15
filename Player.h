#pragma once
#include "Attribute.h"

class Player
{
public:
	float right;
	float left;
	float speed;
	Attribute attribute;

	void set(float l, float r, float s, Attribute a)
	{
		left = l;
		right = r;
		speed = s;
		attribute = a;
	}
};