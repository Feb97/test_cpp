#ifndef SHAPE_H
#define SHAPE_H

class Shape
{
	public:
		Shape(int base, int height);
		virtual int Area(int base, int height);
		int getBase(void);
		int getHeight(void);
		void setBase(int base);
		void setHeight(int height);
		int height;
		int base;
};

#endif
