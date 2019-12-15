#include "Item.h"

using namespace std;

Item::Item()
{
	attribute.pixel = SOLID;
	srand(time(0));
	int color = rand() % 2 + 1;
	switch (color)
	{
	case 1:attribute.color = FG_WHITE; break;
	case 2:attribute.color = FG_GREEN; break;
	}
}

void Item::effect()
{
	switch (attribute.color)
	{
	case FG_WHITE:break;
	case FG_GREEN:break;
	}
}