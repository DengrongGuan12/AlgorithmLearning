#pragma once
#ifndef POINT_H
#define POINT_H
#include <iostream>
using namespace std;
class Point
{
public:
	Point(int x, int y);
	Point(Point &);
	int get_x();
	int get_y();
	void put_x(int x);
	void put_y(int y);
	~Point();
	Point operator+(Point p);
	Point operator*(int i);
	int operator>(Point p);
	int operator<(Point p);
	int operator==(Point& p);

private:
	int x;
	int y;
	friend istream& operator>>(istream& in, Point& p);
	friend ostream& operator<<(ostream& out, Point& p);

};

#endif

