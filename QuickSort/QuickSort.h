#ifndef QUICKSORT_H
#define QUICKSORT_H

#include <algorithm>
using namespace std;
void QuickSort(int array[], int L, int R)
{
	int left = L; 
	int right = R;

	int middle = array[(right + left) / 2]; // chose middle element

	do
	{
		while (array[left] < middle) left++; // chose element that >= middle and stays to the left
		while (array[right] > middle) right--; // chose element that <= middle and stays to the right

		// swap elements and go to the next ones
		if (left <= right)
		{
			if (array[left]>array[right]) swap(array[left], array[right]);
			left++;
			right--;
		}
	} 
	while (left <= right);

	// recursion call
	if (right > L) QuickSort(array, L, right);
	if (left < R) QuickSort(array, left, R);
}

#endif
