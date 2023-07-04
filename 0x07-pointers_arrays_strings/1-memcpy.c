#include "main.h"

/**
 * char *_memcpy - copies memory area
 * @dest: copied to memory area
 * @src: copied from memory area
 * @n: num of copied bytes
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int c;
	int d = n;

	for (c = 0; c < d; c++)
	{
		dest[c] = src[c];
		n--;
	}

	return (dest);
}
