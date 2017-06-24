#pragma once


class Point
{
	float x;
	float y;
public:
	Point(float newX, float newY) :
		x(newX), y(newY) {}
	Point() :x(0), y(0) {}
	~Point() {}
	float getx() const;
	float gety()const;
	void setx(const float);
	void sety(const float);
};