#include "main.h"

/**
 * _strlen - returns length of string
 * @s: input string
 *
 * Return: string length
 */
int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		l++;
		s++;
	}

	return (l);
}
