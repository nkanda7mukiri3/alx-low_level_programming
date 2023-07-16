#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: triangle size
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int r, c;

		for (r = 1; r <= size; r++)
		{
			for (c = 1; c <= size - r; c++)
			{
				_putchar(' ');
			}

			for (c = 1; c <= r; c++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
