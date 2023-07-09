#include "main.h"

/**
 * _strlen_recursion - returns length of string
 * @s: string
 *
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	int l = 0;

	if (*s != '\0')
	{
		l++;
		l += _strlen_recursion(s + 1);
	}

	return (l);
}
