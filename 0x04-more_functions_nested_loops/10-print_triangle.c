#include "main.h"

/**
 * print_triangle - print to the stdout
 * @size: size of triangle to print
 *
 * Return: void
 */
void print_triangle(int size)
{
	int row, col, pr;

	if (size > 0)
	{
		for (row = 1; row <= size; row++)
		{
			for (col = 1; col <= (size - row); col++)
				_putchar(' ');
			for (pr = 1; pr <= row; pr++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
