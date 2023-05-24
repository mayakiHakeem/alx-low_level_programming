#include "main.h"

/**
 * print_to_98 - write numbers to stdout
 * @n: number to start printing from
 *
 * Description: write from number to 98
 * Return: void
 */
void print_to_98(int n)
{

	if (n >= 98)
	{
		for (n = n; n >= 98; n--)
		{
			if (n > 10)
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
			}
			else
				_putchar(n + '0');

			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
	else if (n < 98 && !(n < 0))
	{
		for (n = n; n < 98; n++)
		{
			if (n > 10)
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
			}
			else
				_putchar(n + '0');

			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
	else if (n < 0)
	{
		for (n = n; n >= 98; n++)
		{
			if (-n > 10)
			{
				_putchar(-(n / 10) + '0');
				_putchar(-(n % 10) + '0');
			}
			else
				_putchar(-n + '0');

			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
