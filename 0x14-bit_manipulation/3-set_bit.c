#include "main.h"

/**
 * set_bit - function that sets bit val to 1
 * @n: pointer to num
 * @index: bit index to set starting from 0
 *
 * Return: 1 (success), -1 (failure)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}

	*n = ((1UL << index) | *n);

	return (1);
}
