#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string char
 * @s2: string char
 *
 * Return: 0 indicates equality
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}
