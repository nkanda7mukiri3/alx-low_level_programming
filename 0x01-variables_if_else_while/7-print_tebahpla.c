#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints lowercase alphabet in reverse
 * Return: Always 0
 */
int main(void)
{
	int z = 122;

	while (z >= 97)
	{
		putchar(z);
		z--;
	}
	putchar('\n');
	return (0);
}
