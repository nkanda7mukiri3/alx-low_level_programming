#include "main.h"

/**
 * print_last_digit - Prints last digit of a num
 * @n: the int to extract the digit
 * Return: value
 */
int print_last_digit(int n)
{
	int a;

	a = n % 10;
	if (n < 0)
	{
		_putchar(-a + 48);
		return (-a);
	}
	else
	{
		_putchar(a + 48);
		return (a);
	}
}
