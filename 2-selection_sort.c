#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order
 *
 * @array: array to sort
 * @size: size of the array to sort
 *
 * Description: Implement the selection sort algorithm to sort the array.
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min_idx;

	for (i = 0; i < size - 1; i++)
	{
		min_idx = i;

		/* Find the minimum element in unsorted array */
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_idx])
				min_idx = j;
		}

		/* Swap the found minimum element with the first unsorted element */
		if (min_idx != i)
		{
			int temp;
			
			temp = array[min_idx];
			array[min_idx] = array[i];
			array[i] = temp;
			print_array(array, size);
		}
	}
}
