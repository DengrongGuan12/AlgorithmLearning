#pragma once
#include "Polygon.h"
class Quadrilateral: public Polygon
{
public:
	Quadrilateral(Point,Point);
	~Quadrilateral();
	void inside(Point);
	void draw();

private:
	Point vertex2;
};

