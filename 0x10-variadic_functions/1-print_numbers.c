#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints nums followed by a new line
 * @separator: string to be printed between nums
 * @n: num of integers passed to the function
 * @...: variable of nums to be printed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list d;
	unsigned int i;

	va_start(d, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(d, int));

		if (i != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	printf("\n");

	va_end(d);
}
