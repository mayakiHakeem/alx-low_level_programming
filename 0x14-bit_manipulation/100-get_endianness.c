#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 (big endian). 1 (little endian)
 */
int get_endianness(void)
{
	int m;
	char *c;

	m = 1;
	c = (char *)&m;

	return (*c == 1);
}
