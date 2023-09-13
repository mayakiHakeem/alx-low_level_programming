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
	int count = 0;
	unsigned long int diff;

	diff = n ^ m;

	while (diff)
	{
	        count += diff & 1;

		diff = diff >> 1;
	}
	return (count);
}
