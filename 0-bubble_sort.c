#include "sort.h"
/**
 * bubble_sort - function that sorts an array of integers in ascending order
 * @array: array to sort
 * @size: size
*/
void bubble_sort(int *array, size_t size)
{
	if (array == NULL)
		return;

	for (size_t i = 0; i < size - 1; i++)
	{
		for (size_t j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				int temp = array[j];

				array[j] = array[j + 1];

				array[j + 1] = temp;
				print_array(array, size);

			}
		}
	}

}
