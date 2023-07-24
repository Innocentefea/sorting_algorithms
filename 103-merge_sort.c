#include "sort.h"
/* repetitive calc  mid*/
void mergeSort(int *array, size_t low, size_t high)
{
	size_t mid;

	if (low < high)
	{
		mid =(high + low) / 2;

		mergeSort(array, low, mid);
		mergeSort(array, mid + 1, high);
		merge(array, low, mid, high);
	}


}
/* alloc left and right subarrays and make comparisons*/
void merge(int *array, size_t low, size_t mid, size_t high)
{
	size_t i, j, k;
	int *left, *right;
	size_t left_size = mid - low;
	size_t right_size = high - mid;

	left = malloc(left_size * sizeof(int));
	right = malloc(right_size * sizeof(int));

	for  (i = 0; i < left_size; i++)
	{
		left[i] = array[low + i];
	}

	for  (j = 0; j < right_size; j++)
	{
		right[j] = array[mid + 1 + j];
	}

	i = 0;
    j = 0;
    k = low;
	while (i < left_size && j < right_size)
	{
		if (left[i] <= right[j])
		{
			array[k] = left[i];
			i++;

		}
		else
		{
			array[k] = right[j];
			j++;

		}
		k++;

	}
	while (i < left_size)
	{
		array[k] = array[i];
		i++;
		k++;

	}
	while (j < right_size)
	{
		array[k] = array[j];
		j++;
		k++;

	}
	free(left);
	free(right);

}

void merge_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
	{
		return;
	}
	mergeSort(array, 0, size - 1);

}