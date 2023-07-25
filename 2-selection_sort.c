#include "sort.h"

/**
 * selection_sort - sorts array using selection sort
 *
 * @array: array to sort
 * @size: size of array
 *
 * Return: void
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, idx;
	int hold;
	int swit = 0;

	for (i = 0; i < size; i++)
	{
		hold = array[i];
		for (j = i; j < size; j++)
		{
			if (array[j] < hold)
			{
				hold = array[j];
				swit = 1;
				idx = j;
			}
		}
		if (swit == 1)
		{
			array[idx] = array[i];
			array[i] = hold;
			swit = 0;
			print_array(array, size);
		}
	}
}
