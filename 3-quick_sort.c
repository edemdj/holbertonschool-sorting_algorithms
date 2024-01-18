#include "sort.h"
/**
 * 
*/
void quick_sort(int *array, size_t size)
{
    if (size <= 1)
    {
        return;
    }
     int pivot = array[size / 2];
     int left[size], right[size];
     size_t left_size = 0;
     size_t right_size = 0;

     for (size_t i = 0; i < size; i++)
     {
        if (array[i] < pivot)
        {
            left[left_size++] = array[i];
        }
        else if (array[i] > pivot)
        {
            right[right_size++] = array[i];
        }
     }
     quick_sort(left, left_size);
     quick_sort(right, right_size);

     for (size_t i = 0; i < left_size; i++)
     {
        array[i] = left[i];
     }

     array[left_size] = pivot;
      print_array(array,size);

     for (size_t i = 0; i < right_size; i++)
     {
        print_array(array,size);
        array[left_size + 1 + i] = right[i];
        
     }
    

}

