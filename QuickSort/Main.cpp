#include "QuickSort.h"
#include <iostream>
#include <random>

int main()
{
	int array[10];
	for (int i = 0; i < 10; i++)
	{
		array[i] = rand() % 10;
		cout << array[i] << " ";
	}
	cout << endl;

	QuickSort(array, 0,9);

	for (int i = 0; i < 10; i++)
	{
		cout << array[i] << " ";
	}

	return 0;
}