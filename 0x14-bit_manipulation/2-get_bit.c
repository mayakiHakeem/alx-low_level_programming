#include "main.h"

/**
 * get_bit - get the bit at index
 * @n: the number
 * @index: index
 *
 * Return: value of bit at index. if error (-1)
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int val;
	unsigned int i;

	i = sizeof(unsigned long int) * 8 - 1;
	if (index > i)
		return (-1);

	val = ((n >> index) & 1);
	return (val);
}
