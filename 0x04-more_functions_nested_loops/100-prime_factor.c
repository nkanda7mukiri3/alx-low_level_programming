#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints largest prime fact of 612852475143
 *
 * Return: always 0
 */
int main(void)
{
	long int m, n, o;

	m = -1;
	n = 612852475143;

	while (n % 2 == 0)
	{
		m = 2;
		n /= 2;
	}

	for (o = 3; o <= sqrt(n); o = o + 2)
	{
		while (n % o == 0)
		{
			m = o;
			n = n / o;
		}
	}

	if (n > 2)
	{
		m = n;
	}

	printf("%ld\n", m);

	return (0);
}
