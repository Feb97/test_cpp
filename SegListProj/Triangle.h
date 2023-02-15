#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Shape.h"

class Triangle : Shape
{
	public:
		Triangle(int base, int height);
		int Area(int base, int height) override;
		int getBase();
};



#endif