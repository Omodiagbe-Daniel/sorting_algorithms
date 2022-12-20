#include "sort.h"

/**
* selection_sort - sorts an array of integers
* @array: pointer to array
* @size: size of array
* Return: Nothing
*/

void selection_sort(int *array, size_t size)
{
	size_t i, j, sort;
	int swap;

	for (i = 0; i < size - 1; i++)
	{
		sort = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[sort])
			{
				sort = j;
			}
			if (sort != i)
			{
				swap = array[sort];
				array[sort] = array[i];
				array[i] = swap;
			}
		}
		print_array(array, size);
	}
}
