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
for (c = 0; c < size; c++)
{
for (j = 0; j < size - 1; j++)
{
if (array[j] > array[j + 1])
{
temp = array[j];
array[j] = array[j + 1];
array[j + 1] = temp;
print_array(array, size);
}
}
}
}
