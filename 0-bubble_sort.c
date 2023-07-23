#include "sort.h"

/**
 * bubble_sort - array that sorts using bubble sort
 *
 * @array: array to sort
 * @size: size of array
 *
 * Return: void
 */

void bubble_sort(int *array, size_t size)
{

	size_t arry_idx, done = 0;
	int temp = 0;

	while (done == 0)
	{
		for (arry_idx = 0; arry_idx < size - 1; arry_idx++)
		{
			if (array[arry_idx] > array[arry_idx + 1])
			{
				temp = array[arry_idx];
				array[arry_idx] = array[arry_idx + 1];
				array[arry_idx + 1] = temp;
				print_array(array, size);
				break;
			}
			else
			{
				done++;
				continue;
			}
		}
		if (1 + done == size)
			break;
		done = 0;

	}
}
