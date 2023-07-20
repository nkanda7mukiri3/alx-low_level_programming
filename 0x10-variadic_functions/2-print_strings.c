#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings followed by a new line
 * @separator: string to be printed between strings
 * @n: num of strings passed to the function
 * @...: var num of strings to print
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list s;
	char *t;
	unsigned int u;

	va_start(s, n);

	for (u = 0; u < n; u++)
	{
		t = va_arg(s, char *);

		if (t == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", t);
		}

		if (u != n - 1 && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(s);
}
