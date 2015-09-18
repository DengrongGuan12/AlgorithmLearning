#pragma once
template<class T>
class PointTem
{
public:
	PointTem();
	~PointTem();
	PointTem(T, T);
	T get_x();
	T get_y();
private:
	T x;
	T y;
};

