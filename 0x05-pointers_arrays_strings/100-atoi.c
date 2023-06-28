#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string
 *
 * Return: 0 if no num
 */
int _atoi(char *s)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int l = 0;
	int m = 0;
	int num = 0;

	while (s[l] != '\0')
		l++;

	while (i < l && m == 0)
	{
		if (s[i] == '-')
			++j;

		if (s[i] >= 48 && s[i] <= 57)
		{
			num = s[i] - 48;
			if (j % 2)
				num = -num;
			k = k * 10 + num;
			m = 1;
			if (s[i + 1] < 48 || s[i + 1] > 57)
				break;
			m = 0;
		}
		i++;
	}

	if (m == 0)
		return (0);

	return (k);
}
