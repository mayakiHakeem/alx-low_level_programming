#include "main.h"
#include <unistd.h>

/**
 * print_diagonal - print diagonal lines
 * @n: integral formal parameter
 * Return: void
 */

void print_diagonal(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('\\');
			_putchar('\n');
		}
	}
	else if (n <= 0)
	{
		_putchar('\n');
	}
}
