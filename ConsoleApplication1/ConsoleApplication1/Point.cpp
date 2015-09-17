#include "stdafx.h"
#include "Point.h"
#include <iostream>

using namespace std;
Point::Point(int a, int b)
{
	this->put_x(a);
	this->put_y(b);
}


Point::~Point()
{
}

int Point::get_x(){
	return this->x;
}

int Point::get_y(){
	return this->y;
}

void Point::put_x(int x){
	this->x = x;
}
void Point::put_y(int y){
	this->y = y;
}
istream& operator>>(istream& in, Point& p){
	return in >> p.x >> p.y;
}
ostream& operator<<(ostream& out, Point& p){
	return out << "(" << p.get_x() << "," << p.get_y() << ")";
}

