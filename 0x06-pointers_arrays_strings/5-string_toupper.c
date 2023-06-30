#include "main.h"

/**
 * char *string_toupper - changes lowercase string to uppercase
 * @l: char pointer
 *
 * Return: l
 */
char *string_toupper(char *l)
{
	int i = 0;

	while (l[i] != '\0')
	{
		if (l[i] >= 'a' && l[i] <= 'z')
			l[i] = l[i] - 32;
		i++;
	}
	return (l);
}
