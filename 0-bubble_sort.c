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
	size_t i;
	size_t k;
	size_t newSize = size;

	for (k = 0; k < newSize - 1; k++)
	{
		for (i = 0; i < newSize - 1; i++)
		{
			int temp = array[i];

			if (array[i] > array[i + 1])
			{
				array[i] = array[i + 1];
				array[i + 1] = temp;
				print_array(array, newSize);
			}
		}
	}
}
