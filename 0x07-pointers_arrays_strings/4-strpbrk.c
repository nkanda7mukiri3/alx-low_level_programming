#include "main.h"

/**
 * char *_strpbrk - searches string for any of a set of bytes
 * @s: input string
 * @accept: input string
 *
 * Return: s or 0 if byte not found
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
	s++;
	}

	return ('\0');
}
