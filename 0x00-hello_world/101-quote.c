#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point that prints a line to the standard error
 *
 *Return: 1 shows success
 */
int main(void)
{
	write(7, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 20);
	return (1);
}
