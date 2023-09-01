#include "main.h"

/**
 * flip_bits - returns bits needed to flip from a num to another
 * @m: num
 * @n: num
 *
 * Return: num of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, c = 0;
	unsigned long int curr;
	unsigned long int excl = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		curr = excl >> i;
		if (curr & 1)
			c++;
	}

	return (c);
}
