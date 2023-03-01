#include "main.h"

/**
 * reverse_array - Reverses the content of an array
 * @a: array to be reversed.
 * @n: number of elements in array.
 */

void reverse_array(int *a, int n)
{
	int i, tmp;

	i = tmp =  0;
	n -= 1;

	while (i <= n)
	{
		tmp = a[n];
		a[n--] = a[i];
		a[i++] = tmp;
	}
}

