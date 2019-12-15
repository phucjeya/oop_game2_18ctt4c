#pragma once
#include "Attribute.h"


class Map
{
public:
	int width;
	int height;
	Attribute border;
	Attribute play_area;

	void set(int w, int h, Attribute b, Attribute a)
	{
		width = w;
		height = h;
		border = b;
		play_area = a;
	}
};

