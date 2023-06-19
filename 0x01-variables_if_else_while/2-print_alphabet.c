#include <stdio.h>

/**
 * main - This is the entry point
 *
 * Description: Prints the alphabet in lowercase
 * Return: 0 shows success
 */
int main(void)
{
	int a = 97;

	while (a <= 122)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
