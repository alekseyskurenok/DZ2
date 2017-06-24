#pragma once
#include "Point.h"

class Line
{
	float k;
	float b;
public:
	explicit Line(const float x, const float y = 0) :k(x), b(y) {}
	Line(const Point, const Point);
	float getk() const;
	float getb() const;

	void setk(const float);
	void setb(const float);
	
	bool checkLiesPoint(const Point pt);
	bool chekLies(const int x,const int y);
	int chekHigherOrBelow(const Point pt);

	~Line();
};


Point pointIntersection(const Line l1,const Line l2);

