#include "sort.h"
/**
 * selection_sort - function that sorts an array of integers in ascending order
 * @array: array to sort
 * @size: size to array
*/
void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int min_i;

	if (array == NULL)
	return;

	for (i = 0; i < size - 1; i++)
	{
		min_i = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_i])
			{
				min_i = j;
			}
		}

		if (min_i)
		{
			int temp = array[i];

			array[i] = array[min_i];
			array[min_i] = temp;
			print_array(array, size);

		}
	}
}
