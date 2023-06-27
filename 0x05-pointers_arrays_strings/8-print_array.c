#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of array of int
 * @a: array
 * @n: num of elements to be printed
 */
void print_array(int *a, int n)
{
	int c;

	for (c = 0; c < (n - 1); c++)
	{
		printf("%d, ", a[c]);
	}

	if (c == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}
