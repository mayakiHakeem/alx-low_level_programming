#include "main.h"

/**
 * print_number - print long numbers using putchar
 * @n: number to print
 *
 * return: void
 */
void print_number(int n)
{
	int count = 0, temp, i, places = 1;

	if (n < 0)
	{
		_putchar('-');
		n = -(n);
	}

	temp = n;

	while (temp != 0)
	{
		temp /= 10;
		count++;
	}

	for (i = 1; i < count; i++)
		places *= 10;
	while (places > 0)
	{
		_putchar((n / places) + '0');
		n %= places;
		places /= 10;
	}
}
