#include <stdio.h>

/**
 * main - This is the entry point
 *
 * Description: Prints all except q and e
 * Return: Always 0
 */
int main(void)
{
	int a = 97;

	while (a <= 122)
	{
		if (a == 113 || a == 101)
		{
			a++;
			continue;
		}
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
