#include <stdlib.h>
#include "main.h"

/**
 * print_binary - print bin values
 * @n: number to print
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int shift, leadingZero;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	shift = sizeof(unsigned long int) * 8 - 1;/*bits in unsigned long int*/
	leadingZero = 1; /* Flag to check for leading zeros*/

	while (shift >= 0)
	{
		if ((n >> shift) & 1)
		{
			leadingZero = 0; /* Set flag to no more leading zeros*/
			_putchar('1'); /*Print '1' if the bit is 1*/
		}
		else if (!leadingZero)
		{
			_putchar('0');
		}

		shift--;
	}
}
