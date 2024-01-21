#include "sort.h"
/**
*shell_sort-Shell sort
*@array: array to sort
*@size: size of array
*/
void shell_sort(int *array, size_t size)
{
	int g = 1, m, n, tmp;

	while (g < ((int)(size)))
		g = (3 * g) + 1;
	for (g = (g - 1) / 3; g > 0; g = (g - 1) / 3)
	{
		for (m = g; m < (int)size; m += 1)
		{
			tmp = array[m];

			for (n = m; n >= g && array[n - g] > tmp; n -= g)
				array[n] = array[n - g];

			array[n] = tmp;
		}
		print_array(array, size);
	}
}
