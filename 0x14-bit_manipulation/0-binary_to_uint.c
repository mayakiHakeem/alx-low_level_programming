#include <stdlib.h>
#include "main.h"

/**
 * binary_to_uint - convert str of binary to uint
 * @b: str of binary chars
 *
 * Return: uint of b. 0 if NULL or if b is non-binary
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int digit, binary = 0;
	int i, x, len;

	if (b == NULL)
		return (0);

	len = _strlen(b);
	x = len - 1;
	for (i = 0; i < len; i++)
	{
		if (b[i] == '0' || b[i] == '1')
		{
			digit = (b[i] - '0') * pow2(x);
			binary += digit;
			x--;
		}
		else
			return (0);
	}
	return (binary);
}

/**
 * _strlen - get length
 * @str: string
 *
 * Return: len
 */
int _strlen(const char *str)
{
	unsigned int len = 0;

	while (*str)
	{
		len++;
		str++;
	}

	return (len);
}

/**
 * pow2 - get power with base 2
 * @x: exponent
 *
 * Return: result
 */
int pow2(int x)
{
	int i, result = 1;

	if (x == 0)
		return (1);

	for (i = 1; i <= x; i++)
	{
		result *= 2;
	}

	return (result);
}
