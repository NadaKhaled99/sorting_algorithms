#include "sort.h"
/**
*bubble_sort-sort list with the bubble
*@array:array to be printed
*@size:number of elements in array
*/
void bubble_sort(int *array, size_t size)
{
	size_t n = 0, j = size;
	int hold;

	if (array == NULL)
		return;
	for (j = size; j > 0; j--)
	{
		for (n = 0; n < size - 1; n++)
		{
			if (array[n] > array[n + 1])
			{
				hold = array[n];
				array[n] = array[n + 1];
				array[n + 1] = hold;
				print_array(array, size);
			}
		}
	}
}
