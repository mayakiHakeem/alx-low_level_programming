#include "main.h"

/**
 * print_line - write to stdout
 * @n: the length of line to write
 *
 * Return: void
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
			_putchar('_');
	}
	_putchar('\n');
}
