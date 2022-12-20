#include "sort.h"

/**
* bubble_sort - sorts an array of integers
* @array: pointer to an array
* @size: size of array
* Return: Nothing
*/

void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int swap;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap = array[j];
				array[j] = array[j + 1];
				array[j + 1] = swap;
				print_array(array, size);
			}
		}
	}
}
