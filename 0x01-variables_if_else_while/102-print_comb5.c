#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all combos of 2 two-digit num
 * Return: Always 0
 */
int main(void)
{
	int f, h;

	for (f = 0; f < 100; f++)
	{
		for (h = 0; h < 100; h++)
		{
			if (f < h)
			{
				putchar((f / 10) + 48);
				putchar((f % 10) + 48);
				putchar(' ');
				putchar((h / 10) + 48);
				putchar((h % 10) + 48);
				if (f != 98 || h != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
