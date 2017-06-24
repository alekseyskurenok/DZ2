#include "Line.h"

float Line::getk() const
{
	return k;
}

float Line::getb() const
{
	return b;
}



void Line::setk(const float x)
{
	k = x;
}

void Line::setb(const float y)
{
	b = y;
}


Line::Line(const Point pt, const Point pt1)
{
	k = ((pt1.gety() - pt.gety()) / (pt1.getx() - pt.getx()));
	b = pt1.gety() - k * pt1.getx();
}


bool Line::checkLiesPoint(const Point pt)
{
	if (pt.gety() == pt.getx()*getk() + getb())
	{
		return true;
	}
	return false;
}

int Line::chekHigherOrBelow(const Point pt)
{
	if (pt.gety() == pt.getx()*getk() + getb())
	{
		return 0;
	}
	else
	{
		if (pt.gety() > pt.getx()*getk() + getb())
		{
			return 1;
		}
		return -1;
	}
}



bool Line::chekLies(const int x,const int y)
{
	if (y == x*getk() + getb())
	{
		return true;
	}
	return false;
}


Point pointIntersection(Line l1, Line l2)
{
	float x = (l1.getb() - l2.getb()) / (l1.getk() - l2.getk());
	float y = l1.getk()*x + l1.getb();
	Point intersection(x, y);
	return intersection;
}


Line::~Line()
{
}