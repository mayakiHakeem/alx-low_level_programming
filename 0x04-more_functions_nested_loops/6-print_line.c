#include "main.h"
#include <unistd.h>

/**
 * print_line - print line
 *@n: integral argument for length of line
 * Return: void
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
	}
	else
	{
		_putchar('\n');
	}
}
