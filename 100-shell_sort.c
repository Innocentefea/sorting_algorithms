#include "sort.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _swap - swaped 2 values.
 * @array: the array for swap him values.
 * @i: First index
 * @j: Second index
 * Return: Viod
 */
void _swap(int *array, int i, int j)
{
	int tmp;

	if (array[i] != array[j])
	{
		tmp = array[i];
		array[i] = array[j];
		array[j] = tmp;
	}
}

/**
 * shell_sort - sort the list and print the changes
 * @array: array to sort.
 * @size: Size of the array
 * Return: Viod
 */
void shell_sort(int *array, size_t size)
{
	size_t f = 0,  i, j;

	if (size < 2)
		return;

	while (f <= size / 3)
		f = f * 3 + 1;

	while (f >= 1)
	{
		for (i = f; i < size; i++)
			for (j = i; j >= f && array[j] < array[j - f]; j -= f)
				_swap(array, j, j - f);
		f /= 3;
		print_array(array, size);
	}
}
