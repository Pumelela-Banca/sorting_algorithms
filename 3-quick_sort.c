#include "sort.h"

/**
 * quick_sort - sorts an array of integers in ascending order using the Quick
 * sort algorithm
 *
 * @array: array to sort
 * @size: size of array
 *
 * Return: void
 */

void quick_sort(int *array, size_t size)
{
	size_t low = 0;

	r_sort(array, low, size - 1, size);
}

/**
 * r_sort - recursive quick sort
 *
 * @array: list
 * @low: low index
 * @high: high index
 * @size: size of array
 *
 * Return: void
 */

void r_sort(int *array, size_t low, size_t high, size_t size)
{
	int part;

	if (low < high)
	{
		part = partition(array, low, high, size);
		if (part - 1 <= 0)
		{
			r_sort(array, part + 1, high, size);
			return;
		}
		r_sort(array, low, part - 1, size);
		r_sort(array, part + 1, high, size);
	}

}

/**
 * partition - finds the pivot
 *
 * @array: list
 * @low: lowest value
 * @high: highest value
 * @size: size of array
 *
 * Return: index of element
 */

size_t partition(int *array, size_t low, size_t high, size_t size)
{
	size_t i;
	size_t start;
	int hold = 0, pivot = 0;

	i = low - 1;
	pivot = array[high];
	for (start = low; start < high; start++)
	{
		if (array[start] <= pivot)
		{
			i++;
			hold = array[i];
			array[i] = array[start];
			array[start] = hold;
			/*print_array(array, size);*/
		}
	}
	hold = array[i + 1];
	array[i + 1] = array[high];
	array[high] = hold;
	print_array(array, size);
	return (i + 1);
}
