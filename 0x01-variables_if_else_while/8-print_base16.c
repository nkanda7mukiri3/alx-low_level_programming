#include <stdio.h>

/**
 * main - This is the entry point
 *
 * Description: Prints all num of base 16 in lowercase
 * Return: Always 0
 */
int main(void)
{
	int x, a;

	for (x = 48; x <= 57; x++)
	{
		putchar(x);
	}
	for (a = 97; a <= 102; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
