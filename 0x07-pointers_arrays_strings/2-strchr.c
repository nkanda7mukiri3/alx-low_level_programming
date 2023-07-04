#include "main.h"

/**
 * char *_strchr - locates char in string
 * @s: string input
 * @c: char to locate
 *
 * Return: address of char or NULL if not found
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}

	}
		return (0);
}
