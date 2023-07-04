#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string input
 * @accept: string input
 *
 * Return: l(length of segment)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int l = 0;
	int c;

	while (*s)
	{
		for (c = 0; accept[c]; c++)
		{
			if (*s == accept[c])
			{
				l++;
				break;
			}
			else if (accept[c + 1] == '\0')
			{
				return (l);
			}
		}
		s++;
	}
	return (l);
}
