#include "main.h"

/**
 * print_most_numbers - writr to stdout
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int num_start;

	for (num_start = 0; num_start <= 9; num_start++)
	{
		if (!(num_start == 2 && num_start == 4))
			_putchar(num_start + '0');
	}
	_putchar('\n');
}
