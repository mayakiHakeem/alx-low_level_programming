#include "main.h"

/**
 * clear_bit - set value of bit to zero at @index
 * @n: ptr to number
 * @index: index of bit to clear
 *
 * Return: 1 (success). -1 (failure)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i = sizeof(long int) * 8 - 1;
	unsigned long int mask = 0;

	if (index > i)
		return (-1);

	mask = mask << index;

	*n = *n & mask;

	return (1);
}
