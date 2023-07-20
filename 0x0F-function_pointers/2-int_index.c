#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array
 * @size: num of elements
 * @cmp: pointer to function
 *
 * Return: -1 or index of first element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int f;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}

	for (f = 0; f < size; f++)
	{
		if (cmp(array[f]))
		{
			return (f);
		}
	}

	return (-1);
}
