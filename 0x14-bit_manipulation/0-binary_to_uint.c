#include "main.h"

/**
 * binary_to_uint - converts binary num to unsigned int
 * @b: pointer to str of 0 and 1 chars
 *
 * Return: converted num(success), 0(failure)
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int u_int = 0;

	if (b == NULL)
	{
		return (0);
	}

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] < '0' || b[i] > '1')
		{
			return (0);
		}
		u_int = 2 * u_int + (b[i] - '0');
	}

	return (u_int);
}
