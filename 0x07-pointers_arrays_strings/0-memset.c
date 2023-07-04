#include "main.h"

/**
 * char *_memset - fills memory with constant byte
 * @s: points memory area to be filled
 * @b: constant byte
 * @n: num of first bytes
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}

	return (s);
}
