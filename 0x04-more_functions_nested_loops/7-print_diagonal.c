#include "main.h"
#include <unistd.h>

/**
 * print_diagonal - print diagonal lines
 * @n: integral formal parameter
 * Return: void
 */

void print_diagonal(int n)
{
	int i, line, space;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (line = 1; line <= n; line++)
		{
			i = line - 1;
			for (space = 0; space <= i; space++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
