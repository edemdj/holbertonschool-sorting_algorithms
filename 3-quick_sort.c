#include "sort.h"
/**
 * swap - function to swap
 * @array: array to swap
 * @idx1: integer
 * @idx2: integer
*/

void swap(int *array, int idx1, int idx2)
{
	int tmp = array[idx1];

	array[idx1] = array[idx2];
	array[idx2] = tmp;
}
/**
 * partition - divides the array at the pivot level
 * @array: array to divide.
 * @low: start of the array.
 * @high: end of the array.
 * @size: size of the array.
 *
 * Return: i.
 */
int partition(int *array, int low, int high, int size)
{
	int piv, i, j;

	piv = array[high];
	i = low - 1;

	for (j = low; j < high; j++)
	{
		if (array[j] <= piv)
		{
			i++;
			if (i != j)
			{
				swap(array, i, j);
				print_array(array, size);
			}
		}
	}
	i++;
	if (array[i] > array[high])
	{
		swap(array, i, high);
		print_array(array, size);
	}
	return (i);
}

/**
 * _quick_sort - sorts a part of an array of integers.
 * @array: array to sorts.
 * @low: start of the array.
 * @high: end of the array.
 * @size: size of the array.
*/

void _quick_sort(int *array, int low, int high, int size)
{
	int piv;

	if (low >= high || low < 0)
		return;

	piv = partition(array, low, high, size);

	_quick_sort(array, low, piv - 1, size);
	_quick_sort(array, piv + 1, high, size);
}
/**
 * quick_sort - function that sorts an array
 * @array: array to swap
 * @size: size of array
*/
void quick_sort(int *array, size_t size)
{
	_quick_sort(array, 0, size - 1, size);
}
