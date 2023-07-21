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
			if (format[u] == 'c')
				printf("%s%c", t, va_arg(v, int));
			else if (format[u] == 'i')
				printf("%s%c", t, va_arg(v, int));
			else if (format[u] == 'f')
				printf("%s%c", t, va_arg(v, int));
			else if (format[u] == 's'){
				s = va_arg(v, char *);
				if (!s)
					s = "(nil)";
				printf("%s%s", t, s);
			}else
				u++;
				continue;
			t = ", ";
			u++;
		}
	}
	printf("\n");
	va_end(v);
}
