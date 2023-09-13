#include "main.h"

/**
 * flip_bits - return number of bits needed flip numbers
 * @n: first number
 * @m: second number
 *
 * Return: the num of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int diff;

	diff = n ^ m;
	i = sizeof(long int) * 8 - 1;

	while (i >= 0)
	{
		if (diff)
			count++;

		diff = diff << 1;
		i--;
	}
	return (count);
}
