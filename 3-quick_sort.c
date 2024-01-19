#include "sort.h"
/**
 *quick_sort - function that sorts an array of integers
 *swap - function to swap in array
 *_quick_sort -
 *partition - function to partitioned around pivot
 *@array: array to sort
 *@idex1:
 *@idex2:
*/

void swap(int *array, int idx1, int idx2)
{
	int tmp = array[idx1];

	array[idx1] = array[idx2];
	array[idx2] = tmp;
}

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

void _quick_sort(int *array, int low, int high, int size)
{
	int piv;

	if (low >= high || low < 0)
		return;

	piv = partition(array, low, high, size);

	_quick_sort(array, low, piv - 1, size);
	_quick_sort(array, piv + 1, high, size);
}

void quick_sort(int *array, size_t size)
{
	_quick_sort(array, 0, size - 1, size);
}
