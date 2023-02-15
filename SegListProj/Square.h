#ifndef SQUARE_H
#define SQUARE_H

#include "Shape.h"

class Square : Shape
{
	public:
		Square(int base, int height);
		int Area(int base, int height) override;
		int getBase();
};



#endif
