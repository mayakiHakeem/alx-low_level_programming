#include "main.h"
#include <unistd.h>

/**
 * print_most_numbers - print number set
 *
 * Return: integral result
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (!(i == 2 || i == 4))
		{
			_putchar(i + '0');
		}
	}
		putchar('\n');
}
