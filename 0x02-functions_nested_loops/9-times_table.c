#include "main.h"

/**
 * times_table - write times_table to stdout
 *
 * Description: Write 0-9 times_table to stdout
 * Return: void
 */
void times_table(void)
{
	int row, col;

	for (row = 0; row <= 9; row++)
	{
		for (col = 0; col <= 9; col++)
		{
			int result = row * col;
			int result_tens = result / 10;
			int result_unit = result % 10;

			if (result < 10)
			{
				_putchar(' ');
				_putchar(result + '0');
			}
			else
			{
				_putchar('0' + result_tens);
				_putchar(result_unit + '0');
			}

			if (col != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
