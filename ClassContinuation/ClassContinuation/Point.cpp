#include "Point.h"

float Point::getx() const
{
	return x;
}

float Point::gety() const
{
	return y;
}

void Point::sety(const float newy)
{
	y = newy;
}

void Point::setx(const float newx)
{
	x = newx;
}