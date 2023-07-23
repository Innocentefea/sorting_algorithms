#include "sort.h"
/**
* merge_sort - Sorts an array of integers in ascending order using merge sort
* @array: Pointer to the array to be sorted
* @size: The number of elements in the array
* Description: the merge sort algorithm to sort the
*/

void merge_sort(int *array, size_t size)
{
	if (size < 2)
	{
		return;
	}
	size_t mid = size / 2;

	merge_sort(array, mid); /* left*/
	merge_sort((array + mid + 1), size - mid); /*right*/
	merge(array, 0, mid, size); /* mege subs */
}
