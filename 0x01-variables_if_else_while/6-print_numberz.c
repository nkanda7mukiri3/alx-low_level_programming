#include <stdio.h>

/**
 * main - This is the entry point
 *
 * Description: Prints all single digit num
 * Return: Always 0
 */
int main(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		putchar(x + 48);
	}
	putchar('\n');
	return (0);
}
