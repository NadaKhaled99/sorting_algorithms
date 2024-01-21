#include "sort.h"
/**
*selection_sort -sort the list with selection_sort
*@array:array to be printed
*@size:number of elements in @array
*/
void selection_sort(int *array, size_t size)
{
size_t j, k, l, t, s;
if (array == NULL)
return;
for (j = 0; j < size; j++)
{
for (l = j, k = j; k < size; k++)
if (array[k] < array[l])
{
l = k;
s = 1;
}
if (s == 1)
{
t = array[l];
array[l] = array[j];
array[j] = t;
print_array(array, size);
s = 0;
}
}
}
