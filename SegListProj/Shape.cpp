#include "Shape.h"

Shape::Shape(int base, int height)
{
	this->base = base;
	this->height = height;
}

int Shape::Area(int base, int height)
{
	return base * height;
}

int Shape::getBase(void)
{
	return base;
}

int Shape::getHeight(void)
{
	return height;
}

void Shape::setBase(int base)
{
	this->base = base;
}

void Shape::setHeight(int height)
{
	this->height = height;
}