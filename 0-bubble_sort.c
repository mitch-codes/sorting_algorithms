#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * bubble_sort - use bubble sort on array
 *
 * @array: the array being sorted
 * @size: the size
 * Return: Void
 */
void bubble_sort(int *array, size_t size)
{
	int i;
	int k;
	int newSize = (int) size;

	for (k = 0; k < newSize; k++)
	{
		for (i = 0; i < newSize; i++)
		{
			int temp = array[i];

			if (array[i] > array[i + 1])
			{
				array[i] = array[i + 1];
				array[i + 1] = temp;
			}
		}
	}
}
