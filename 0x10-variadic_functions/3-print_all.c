#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - prints anything
 * @format: types of arguments passed to function
 */
void print_all(const char * const format, ...)
{
	char *s, *t = "";
	int u = 0;
	va_list v;

	va_start(v, format);
	if (format)
	{
		while (format[u])
		{
			switch (format[u])
			{
				case 'c':
					printf("%s%c", t, va_arg(v, int));
					break;
				case 'i':
					printf("%s%d", t, va_arg(v, int));
					break;
				case 'f':
					printf("%s%f", t, va_arg(v, double));
					break;
				case 's':
					s = va_arg(v, char *);
					if (!s)
						s = "(nil)";
					printf("%s%s", t, s);
					break;
				default:
				u++;
				continue;
			}
			t = ", ";
			u++;
		}
	}
	printf("\n");
	va_end(v);
}
