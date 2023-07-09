#include "main.h"

/**
 * factorial - returns factorial of num
 * @n: number
 *
 * Return: n!, -1 indicates error
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
