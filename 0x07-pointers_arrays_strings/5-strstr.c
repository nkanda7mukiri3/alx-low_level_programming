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
	for (*haystack = 0; *haystack != '\0'; haystack++)
	{
		char *h = haystack;
		char *n = needle;

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
