#include "main.h"

/**
 * _pow_recursion - returns val of x to power y
 * @x: num to raise
 * @y: power
 *
 * Return: val of x to power y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	if (y == 0)
	{
		return (1);
	}

	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
