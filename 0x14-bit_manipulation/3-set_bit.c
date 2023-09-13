#include "main.h"

/**
 * set_bit - set value of bit at index to 1
 * @n: ptr to the int
 * @index: index of bit to set to 1
 *
 * Return: 1 (success). -1 (failure)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i = sizeof(long int) * 8 - 1;
	unsigned long int mask = 1;

	if (index > i)
		return (-1);

	mask = mask << index;

	*n = *n | mask;

	return (1);
}
