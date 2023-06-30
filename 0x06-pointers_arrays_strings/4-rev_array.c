#include "main.h"

/**
 * reverse_array - reverses content of array of int
 * @a: array
 * @n: num of elements of array
 */
void reverse_array(int *a, int n)
{
	int i, j, t;

	j = n - 1;
	for (i = 0; i < j; i++)
	{
		j--;
		t = a[i];
		a[i] = a[j];
		a[j] = t;
	}
}
