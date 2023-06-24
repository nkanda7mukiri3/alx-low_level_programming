#include <stdio.h>

/**
 * main - Finds and prints the first 98 Fibonacci num
 *
 * Return: 0 shows success
 */
int main(void)
{
	unsigned long int i;
	unsigned long int b = 1;
	unsigned long int a = 2;
	unsigned long int l = 1000000000;
	unsigned long int b1;
	unsigned long int b2;
	unsigned long int a1;
	unsigned long int a2;

	printf("%ld", b);
	for (i = 1; i < 91; i++)
	{
		printf(", %ld", a);
		a += b;
		b = a - b;
	}
	b1 = (b / l);
	b2 = (b % l);
	a1 = (a / l);
	a2 = (a % l);
	for (i = 92; i < 99; ++i)
	{
		printf(", %ld", a1 + (a2 / l));
		printf("%ld", a2 % l);
		a1 = a1 + b1;
		b1 = a1 - b1;
		a2 = a2 + b2;
		b2 = a2 - b2;
	}
	printf("\n");
	return (0);
}