#include "sort.h"
/**
 * 
*/
void selection_sort(int *array, size_t size)
{
    if (array == NULL)
    return;

    for (size_t i = 0; i < size - 1; i++)
    {
        size_t min_i = i;
        for (size_t j = i + 1; j < size; j++)
        {
            if (array[j] < array[min_i])
            {
                min_i = j;
            }
        }
        if (min_i != i)
        {
            int temp = array[i];
            array[i] = array[min_i];
            array[min_i] = temp;
            print_array(array, size);
            for (size_t k = 0; k < size; k++);
        }
    }
}
