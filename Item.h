#pragma once
#include "Attribute.h"
#include <Windows.h>
#include <ctime>

class Item
{
public:
	int x1;
	int x2;
	int y1;
	int y2;
	Attribute attribute;
	float effect_time;
	
	Item();
	void effect();
};

