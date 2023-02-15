#include "Square.h"

Square::Square(int base, int height) : Shape(base, height)
{
	this->base = base;
	this->height = height;
}

int Square::Area(int base, int height)
{
	return base * height;
}