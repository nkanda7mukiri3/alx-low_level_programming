#include <stdio.h>

/**
 * main - prints num from 1 - 100
 * multiples of 3 prints Fizz
 * multiples of 5 prints Buzz
 * multiples of 3 and 5 prints FizzBuzz
 *
 * Return: 0(success)
 */
int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0 && n % 5 != 0)
		{
			printf("Fizz\n");
		}
		else if (n % 5 == 0 && n % 3 != 0)
		{
			printf("Buzz\n");
		}
		else if (n % 3 == 0 && n % 5 == 0)
		{
			printf("FizzBuzz\n");
		}
		else
		{
			printf("%d\n", n);
		}
	}

	return (0);
}
