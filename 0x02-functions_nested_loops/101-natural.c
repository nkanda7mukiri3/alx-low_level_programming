#include <stdio.h>

/**
 * main - Lists all multiples of 3 & 5 below 1024
 *
 * Return: 0 indicates success
 */
int main(void)
{
	int i, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			sum += i;
	}

	printf("%d\n", sum);
	return (0);
}
