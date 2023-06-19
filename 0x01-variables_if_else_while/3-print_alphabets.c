#include <stdio.h>

/**
 * main - This is the entry point
 *
 * Description: Prints alphabet in lowercase then uppercase
 * Return: Always 0
 */
int main(void)
{
	int a = 97;
	int A = 65;

	while (a <= 122)
	{
		putchar(a);
		a++;
	}
	while (A <= 90)
	{
		putchar(A);
		A++;
	}
	putchar('\n');
	return (0);
}
