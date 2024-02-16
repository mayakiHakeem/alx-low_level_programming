#include "main.h"

/**
 * print_times_table - write to stdout
 *@n: the level of table
 *
 * Description: write table to stdout
 *Return: void
 */
void print_times_table(int n)
{
	if (!(n < 0 || n > 15))
	{
		int row, col;

		for (row = 0; row <= n; row++)
		{
			for (col = 0; col <= n; col++)
			{
				int multiple = col * row;

				if (multiple > 99)
				{
					_putchar((multiple / 100) + '0');
					_putchar(((multiple % 100) / 10) + '0');
					_putchar((multiple % 10) + '0');
				}
				else if (multiple > 9)
				{
					_putchar(' ');
					_putchar((multiple / 10) + '0');
					_putchar((multiple % 10) + '0');
				}
				else
				{
					if (col != 0)
					{
						_putchar(' ');
						_putchar(' ');
					}
					_putchar(multiple + '0');
				}
				if (n != col)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
