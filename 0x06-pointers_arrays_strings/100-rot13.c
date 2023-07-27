#include "main.h"
#include <stdio.h>

/**
 * rot13 - encodes a string using rot13
 * @str: pointer to string parameters
 * Return: *str
 */
char *rot13(char *str)
{
	int i, j;
	char data1[52], datarot[52];

	for (i = 0; i < 26; i++)
	{
		data1[i] = 'A' + i;
	}
	for (i = 0; i < 26; i++)
	{
		data1[i + 26] = 'a' + i;
	}
	for (j = 0; j < 26; j++)
	{
		datarot[j] = 'A' + (j + 13) % 26;
	}
	for (j = 0; j < 26; j++)
	{
		datarot[j + 26] = 'a' + (j + 13) % 26;
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == data1[j])
			{
				str[i] = datarot[j];
				break;
			}
		}
	}
	return (str);
}
