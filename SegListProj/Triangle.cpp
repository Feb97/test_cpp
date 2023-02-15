#include "Triangle.h"

Triangle::Triangle(int base, int height) : Shape(base, height)
{
	this->base = base;
	this->height = height;
}

int Triangle::Area(int base, int height)
{
	return (base * height) / 2;
}