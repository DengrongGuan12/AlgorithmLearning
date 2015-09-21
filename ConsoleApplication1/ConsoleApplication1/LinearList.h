#pragma once
template<class T>
class LinearList
{
public:
	LinearList();
	~LinearList();
	virtual int Size()const = 0;
	virtual int Length()const = 0;

};

