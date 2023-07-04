#include "main.h"

/**
 * char *_strstr - locates a substring
 * @haystack: string
 * @needle: substring
 *
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
	char *h = haystack;
	char *n = needle;

	for (haystack = 0; *haystack != '\0'; haystack++)
	{
		while (*h == *n && *n != '\0')
		{
			h++;
			n++;
		}

		if (*n == '\0')
		{
			return (haystack);
		}
	}

	return (0);
}
