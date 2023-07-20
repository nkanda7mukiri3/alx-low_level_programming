#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: num of arg passed to the function
 * @...: var to calc the sum of
 *
 * Return: sum or 0 if n is 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list a;
	unsigned int u, sum = 0;

	if (n == 0)
	{
		return (0);
	}

	va_start(a, n);

	for (u = 0; u < n; u++)
	{
		sum += va_arg(a, int);
	}

	va_end(a);

	return (sum);
}
