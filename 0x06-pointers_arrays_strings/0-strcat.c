#include "main.h"

/**
 * char *_strcat - concatenates two strings
 * @dest: string to concatenate
 * @src: string to concatenate
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int d, s;

	d = 0;
	while (dest[d] != '\0')
	{
		d++;
	}

	s = 0;
	while (src[s] != '\0')
	{
		src[s] = dest[d];
		d++;
		s++;
	}

	dest[d] = '\0';
	return (dest);
}
