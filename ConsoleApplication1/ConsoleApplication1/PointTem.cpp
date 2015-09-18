#include "stdafx.h"
#include "PointTem.h"
template <class T>
PointTem<T>::PointTem(T x, T y){


}
template <class T>
PointTem<T>::~PointTem()
{
}
template <class T>
T PointTem<T>::get_x(){
	return this->x;
}
template<class T>
T PointTem<T>::get_y(){
	return this->y;
}

