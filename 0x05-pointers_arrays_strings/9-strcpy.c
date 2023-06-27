#include "main.h"

/**
 * char *_strcpy - copies string pointed to by src
 * @dest: copied to
 * @src: copied from
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int c = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}

	for (c = 0; c < l; c++)
	{
		dest[c] = src[c];
	}
	dest[l] = '\0';

	return (dest);
}
