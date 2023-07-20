#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * @array: array pointer
 * @size: size of array
 * @action: pointer to function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int l;

	if (array == NULL || action == NULL)
	{
		return;
	}

	for (l = 0; l < size; l++)
	{
		action(array[l]);
	}
}
