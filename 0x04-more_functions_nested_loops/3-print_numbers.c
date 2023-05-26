#include "main.h"

/**
 * print_numbers - write digits to stdout
 *
 * Description: write 0 to 9 to stdout
 * Return: void
 */
void print_numbers(void)
{
	int num_start;

	num_start = 0;
	while (num_start <= 9)
	{
		_putchar(num_start + '0');
		num_start += 1;
	}
	_putchar('\n');
}
