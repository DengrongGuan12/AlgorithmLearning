#include "stdafx.h"
#include "QuickSort.h"
#include <ctime>;
#include <iostream>

using namespace std;
QuickSort::QuickSort()
{
}


QuickSort::~QuickSort()
{
}

void QuickSort::go(){
	srand(unsigned(time(NULL)));
	int t_nArray[10];
	for (int i = 0; i < 10; i++){
		t_nArray[i] = rand() % 100;
	}
	sort(t_nArray, 0, 9);
	for (int i = 0; i < 10; i++){
		cout << t_nArray[i];
		cout << ",";
	}
	system("pause");


}
void QuickSort::sort(int e[], int first, int end){
	int i = first, j = end;
	int tmp = e[first];
	while (i < j){
		while (i < j && e[j] >= tmp){
			j--;
		}
		e[i] = e[j];
		while (i < j && e[i] <= tmp){
			i++;
		}
		e[j] = e[i];

	}
	e[i] = tmp;
	if (first < i - 1){
		sort(e, first, i - 1);
	}
	if (end > i + 1){
		sort(e, i + 1, end);
	}
}

