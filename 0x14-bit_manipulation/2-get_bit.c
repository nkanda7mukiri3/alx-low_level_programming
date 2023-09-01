#include "main.h"

/**
 * get_bit - returns value of a bit at given index
 * @n: num
 * @index: bitindex from 0
 *
 * Return: bit val at index(success), -1(failure)
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int u_int;

	if (index > 63)
	{
		return (-1);
	}

	u_int = (n >> index) & 1;

	return (u_int);
}
