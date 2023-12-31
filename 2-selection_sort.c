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
	size_t i, j;
	size_t minIndex;
	size_t tmp;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size; i++)
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
		if (i != minIndex)
		{
			tmp = array[minIndex];
			array[minIndex] = array[i];
			array[i] = tmp;
			print_array(array, size);

		}


	}

}
