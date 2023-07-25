#include "sort.h"
/**
* mergeSort - sorts an array of integers in ascending order.
* @array: the array to be sorted
* @tmp_array: a temporary array used during the sorting process
* @start: the starting index of the sub-array to be sorted
* @end: the ending index of the sub-array to be sorted
* Return: void
*/
void mergeSort(int *array, int *tmp_array, size_t start, size_t end)
{
	size_t mid;

	if (start >= end)
		return;

	mid = start + (end - start) / 2;
	/*Check if the first half is bigger and adjust the middle index*/
	if ((mid - start + 1) > (end - mid))
		mid--;

	mergeSort(array, tmp_array, start, mid);
	mergeSort(array, tmp_array, mid + 1, end);
    /* print subarrays */
	printf("Merging...\n");
	printf("[left]: ");
	print_array(array + start, mid - start + 1);
	printf("[right]: ");
	print_array(array + mid + 1, end - mid);
	printf("[Done]: ");
	print_array(array + start, end - start + 1);

	merge(array, tmp_array, start, mid, end);
}
/**
* merge - merges two sorted sub-arrays into a single sorted sub-array
* @array: the array containing the two sub-arrays to be merged
* @tmp_array: a temporary array used during the sorting process
* @start: the starting index of the first sub-array
* @mid: the ending index of the first sub-array
* @end: the ending index of the second sub-array
* Return: void
*/
void merge(int *array, int *tmp_array, size_t start, size_t mid, size_t end)
{
	size_t i, j, k;

	i = start;
	j = mid + 1;
	k = start;

	while (i <= mid && j <= end)
	{
		if (array[i] < array[j])
		{
			tmp_array[k++] = array[i++];
		}
		else
		{
			tmp_array[k++] = array[j++];
		}
	}
	while (i <= mid)
	{
		tmp_array[k++] = array[i++];
	}

	while (j <= end)
	{
		tmp_array[k++] = array[j++];
	}
	for (i = start; i <= end; i++)
	{
		array[i] = tmp_array[i];

	}

}

/**
* merge_sort - sorts an array using the Merge sort algorithm
* @array: the array to be sorted
* @size: the number of elements in the array
*
* Return: void
*/
void merge_sort(int *array, size_t size)
{
	int *tmp_array;

	if (array == NULL || size < 2)
		return;
	tmp_array = malloc(size * sizeof(int));
	if (!tmp_array)
		return;

	mergeSort(array, tmp_array, 0, size - 1);
	free(tmp_array);

}
