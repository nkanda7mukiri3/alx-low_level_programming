#include "main.h"

/**
 * puts_half - prints second half of a string
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int l, m, n;

	l = 0;

	for (m = 0; str[m] != '\0'; m++)
	{
		l++;
	}

	n = (l / 2);

	if ((l % 2) == 1)
	{
		n = ((l + 1) / 2);
	}

	for (m = n; str[m] != '\0'; m++)
	{
		_putchar(str[m]);
	}
	_putchar('\n');
}
