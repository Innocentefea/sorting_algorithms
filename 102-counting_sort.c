#include "sort.h"
/**
* getMax - Find the maximum value in an array.
* @array: Pointer to the input array.
* @size: The size of the array.
* Return: The maximum value in the array.
*/
int getMax(int *array, size_t size)
{
	size_t i;
	int max = array[0];

	for (i = 1; i < size; i++)
	{
		if (array[i] > max)
		{
			max = array[i];
		}
	}
	return (max);
}
/**
* counting_sort - Sorts an array of integers.
* @array: Pointer to the input array.
* @size: The size of the array.
*
* Description: This function uses the Counting sort algorithm.
*/

void counting_sort(int *array, size_t size)
{
	size_t max;
	int *counting_array;
	int *sorted;
	size_t i, j;

	max = getMax(array, size);

	if (array == NULL || size < 2)
		return;
	counting_array = malloc((max + 1) * sizeof(int));
	if (!counting_array)
	{
		return;
	}
	sorted = malloc(size * sizeof(int));
	if (!sorted)
	{
		free(counting_array);
		return;
	}
	for (i = 0; i <= max; i++)
	{
		counting_array[i] = 0;
	}
	for (j = 0; j < size; j++)
	{
		counting_array[array[j]]++;
	}
	for (i = 1; i <= max; i++)
	{
		counting_array[i] += counting_array[i - 1];
	}
	print_array(counting_array, max + 1);
	for (i = size - 1; i < size; i--)
	{
		sorted[counting_array[array[i]] - 1] = array[i];
		counting_array[array[i]]--;
	}
	for (i = 0; i < size; i++)
	{
		array[i] = sorted[i];
	}
	free(counting_array);
	free(sorted);
}
