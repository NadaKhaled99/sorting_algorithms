#include "sort.h"
/**
*partition-array partition
*@array:array to sort
*@first:position
*@last:position
*@size:array size
*Return:p index
*/
int partition(int *array, int first, int last, size_t size)
{
	int i = first - 1, a, j;
	for (j = first; j <= last - 1; j++)
	{
		if (array[j] < array[last])
		{
			i++;
			if (i < j)
			{
				a = array[i];
				array[i] = array[j];
				array[j] = a;
				print_array(array, size);
			}
		}
	}
	if (array[i + 1] > array[last])
	{
		a = array[i + 1];
		array[i + 1] = array[last];
		array[last] = a;
		print_array(array, size);
	}

	return (i + 1);
}
/**
*quiz-sort array of integers
*@array:array to sort
*@first:first position
*@last:last position
*@size:array size
*/
void quiz(int *array, int first, int last, size_t size)
{
	int ;
	if (first < last)
	{
		p = partition(array, first, last, size);
		quiz(array, first, p - 1, size);
		quiz(array, p + 1, last, size);
	}
}

/**
*quick_sort-sorts an array of integers
*@array: array to sort
*@size: array size
*/
void quick_sort(int *array, size_t size)
{
	quiz(array, 0, size - 1, size);
}
