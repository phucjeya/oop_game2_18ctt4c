#pragma once
#include "Attribute.h"
#include <time.h>
#include <stdlib.h>
#include <math.h>

class Ball
{
public:
	float x;
	float y;
	float dx;
	float dy;
	float speed;
	float angle;
	Attribute attribute;

	Ball()
	{
		srand(time(0));
		angle = ((float)rand() / (float)(RAND_MAX))*3.14159*2.0;
		angle = -0.6;
		dx = cosf(angle);
		dy = sinf(angle);
		speed = 40.0;
	}

	void set(float _x, float _y, Attribute a)
	{
		x = _x;
		y = _y;
		attribute = a;
	}
};