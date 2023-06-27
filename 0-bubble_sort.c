#include "sort.h"

/**
 * swap1 - swaps tow value
 *
 * @x: first value
 * @y: second value
 */

void swap1(int *x, int *y)
{
	int temp;

	temp = *x;
	*x = *y;
	*y = temp;
}



/**
 * bubble_sort - Sorts an array of integers in ascending order using
 *               the Bubble sort algorithm.
 *
 * @array: A pointer to the array of integers to sort.
 * @size: The number of elements in the array.
 */

void bubble_sort(int *array, size_t size)
{
	int flag;
	size_t i;

	/* Verify if array and size exist */
	if (!array || !size)
	return;

	flag = 1;
	for (i = 0; flag == 1; i++)
	{
		/* reset flag to 0 at the beginning of each iteration */
		flag = 0;
		for (i = 0; i < size - 1; i++) /* iterate over the array */
		{
			/* if current element is greater than next */
			if (array[i] > array[i + 1])
			{
				/* swap current and next elements */
				swap1(&array[i], &array[i + 1]);
				/* set flag to 1 to indicate swap was made */
				flag = 1;
				print_array(array, size);
			}
		}

		if (flag == 0) /* if no swaps were made, break out of the loop */
		break;
	}
}
