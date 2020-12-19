#include "InsertionSort.h"

void InsertionSort::sort(int * a,int len) {
	for (size_t i = 1; i < len; i++)
	{
		int key = a[i];
		size_t j;
		for (j = i - 1;  j >= 0; j--)
		{
			if (key < a[j]) {
				a[j+1] = a[j];
			}
			else {
				break;
			}
		}
		a[j + 1] = key;
	}
}

