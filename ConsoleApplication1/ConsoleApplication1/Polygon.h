#pragma once
#include "Point.h"
class Polygon
{
public:
	Polygon();
	~Polygon();
	Polygon(Point);
	void move(Point);
	void inside(Point);
	Point getReferencePoint();
	virtual void draw() = 0;
protected:
	Point referencePoint;
};

