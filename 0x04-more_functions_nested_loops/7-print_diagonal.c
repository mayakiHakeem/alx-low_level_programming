#include "main.h"

/**
 * print_diagonal - write characters stdout
 * @n: length of diagonal
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int space;
	int line;

	if (n > 0)
	{
		for (space = 1; space <= n; space++)
		{
			for (line = 1; line <= space; line++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
