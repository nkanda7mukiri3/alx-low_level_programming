#include "main.h"

/**
 * char *_strncpy - copies a string
 * @dest: destination string
 * @src: source string
 * @n: max char to copy from src
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int s = 0;

	while (src[s] != '\0' && s < n)
	{
		dest[s] = src[s];
		s++;
	}

	while (s < n)
	{
		dest[s] = '\0';
		s++;
	}

	return (dest);
}
