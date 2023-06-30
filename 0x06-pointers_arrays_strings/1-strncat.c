#include "main.h"

/**
 * char *_strncat - concatenates two strings
 * @dest: string to concatenate
 * @src: string to concatenate
 * @n: max bytes used from src
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int d, s;

	d = 0;
	while (dest[d] != '\0')
	{
		d++;
	}

	s = 0;
	while (src[s] != '\0' && s < n)
	{
		dest[d] = src[s];
		d++;
		s++;
	}

	dest[d] = '\0';
	return (dest);
}
