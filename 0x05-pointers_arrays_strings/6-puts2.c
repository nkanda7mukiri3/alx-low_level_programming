#include "main.h"

/**
 * puts2 - prints every other char of string
 * @str: string
 */
void puts2(char *str)
{
	int l = 0;
	int m = 0;
	char *n = str;
	int o;

	while (*n != '\0')
	{
		n++;
		l++;
	}

	m = l - 1;
	for (o = 0; o <= m; o++)
	{
		if (o % 2 == 0)
		{
			_putchar(str[0]);
		}
	}
	_putchar('\n');
}
