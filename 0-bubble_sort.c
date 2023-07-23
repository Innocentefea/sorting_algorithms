#include "sort.h"
#include <stdio.h>
#include <stdlib.h>

/**
* bubble_sort - a function that sorts an array of integers in
* ascending order using the Bubble sort algorithm
* @array: array of integers
* @size: size of array
* Return: Nothing
**/

void bubble_sort(int *array, size_t size)
{

	size_t c, j;
	int temp;
	int swapped;

	if (array == NULL || size < 2)
	return;

	for (c = 0; c < size; c++)
	{
		swapped = 0; /* Initialize the swapped flag to 0 */
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				swapped = 1; /* Set the swapped flag to 1 */
			}
		}

		/*If no two elements were swapped in the inner loop, the array is already sorted */
		if (swapped == 0)
			break;

		print_array(array, size);
	}
}
