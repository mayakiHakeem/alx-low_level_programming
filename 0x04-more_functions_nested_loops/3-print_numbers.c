#include "main.h"
#include <unistd.h>

/**
 * print_numbers - printing digits followed by a new line
 *
 * Return: Always 0 (Success)
 */

void print_numbers(void)
{
	int c;

	c = 0;
	while (c <= 9)
	{
		_putchar(c + '0');
		c++;
	}
	_putchar('\n');
}
