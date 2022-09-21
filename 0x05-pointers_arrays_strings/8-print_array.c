#include "main.h"

/**
 * print_array - print integral array
 * @a: integral pointer to an array
 * @n: integral argument for size of numbers to be printed
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
		{
			_putchar(a[i]);
			_putchar(',');
			_putchar(' ');
		else
		       _putchar(a[i]);
		}
	}
	_putchar('\n');
}
