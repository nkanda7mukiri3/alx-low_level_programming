#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: num to print '\'
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int r, c;

		for (r = 0; r < n; r++)
		{
			for (c = 0; c < n; c++)
			{
				if (c == r)
				{
					_putchar('\\');
				}
				else if (c < r)
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
