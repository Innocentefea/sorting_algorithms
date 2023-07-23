#include "sort.h"
/**
* selection_sort - Sorts an array of integers in ascending order
*                  using the Selection Sort algorithm.
*
* @array: Pointer to the array to be sorted.
* @size: Number of elements in the array.
*/
void selection_sort(int *array, size_t size)
{
	size_t i, j, minIndex;
	int tmp;

	for (i = 0; i < size - 1; i++)
	{
		minIndex = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[minIndex])
			{
				minIndex = j;
			}

		}
			/*swap*/
	tmp = array[minIndex];
	array[minIndex] = array[i];
	array[i] = tmp;
	print_array(array, size);

	}

}
