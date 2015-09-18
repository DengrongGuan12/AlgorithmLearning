#include "stdafx.h"
#include "SelectSort.h"


SelectSort::SelectSort()
{
}


SelectSort::~SelectSort()
{
}

void SelectSort::sort(int a[], const int n){
	int temp, i, j, k;
	for (i = 0; i < n - 1; i++){
		k = i;
		for (j = i + 1; j < n; j++){
			if (a[j] < a[k]){
				k = j;
			}
		}
		if (i != k){
			temp = a[i];
			a[i] = a[k];
			a[k] = temp;
		}
	}
}
