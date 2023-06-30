#include "main.h"

/**
 * reverse_array - reverses content of array of int
 * @a: array
 * @n: num of elements of array
 */
void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
