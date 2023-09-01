#include "main.h"

/**
 * get_endianness - function that checks the endianness
 * Return: 0 (big endian), 1 (little endian)
 */
int get_endianness(void)
{
	unsigned int u_int = 1;
	char *ch = (char *) &u_int;

	return (*ch);
}
