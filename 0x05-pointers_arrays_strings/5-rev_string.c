#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	char r = s[0];
	int c = 0;
	int d;

	while (s[c] != '\0')
		c++;

	for (d = 0; d < c; d++)
	{
		c--;
		r = s[d];
		s[d] = s[c];
		s[c] = r;
	}
}
