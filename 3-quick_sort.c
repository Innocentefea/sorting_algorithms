#include "sort.h"
#include "swap.c"
/**
* partition - Helper function for quick_sort to partition the array
* @array: Pointer to the array to be sorted
* @size: Size of the array
* @low: Index of the starting element of the current partition
* @high: Index of the ending element of the current partition
*
* Return: Index of the pivot element after partitioning
*/
int partition(int *array, size_t size, int low, int high)
{
	int *pivot = array + high;
	int i = low - 1;
	int j;

	for (j = low; j <= high - 1; j++)
	{
		if (array[j] < *pivot)
		{
			i++;
			swap(&array[i], &array[j]);
		}
	}
	swap(&array[i + 1], &array[high]);
	print_array(array, size);
	return (i + 1);
}
/**
* partition_sort - Recursive function to perform partition sort
* @array: Pointer to the array to be sorted
* @size: Size of the array
* @low: Index of the starting element of the current partition
* @high: Index of the ending element of the current partition
*/

void partition_sort(int *array, size_t size, int low, int high)
{
	int pivot_index;

	if (low < high)
	{
		pivot_index = partition(array, size, low, high);

		partition_sort(array, size, low, pivot_index - 1);
		partition_sort(array, size, pivot_index + 1, high);
	}
}
/**
* quick_sort - Sorts an array of integers in ascending order using quicksort
* @array: Pointer to the array to be sorted
* @size: Size of the array
*/
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	partition_sort(array, size, 0, size - 1);
}

