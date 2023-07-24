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