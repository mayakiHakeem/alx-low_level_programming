#include <unistd.h>
#include "main.h"

/**
 * print_to_98 - print natural numbers
 * description: print all natural numbers from given number to 98
 * @n: given parameter
 * Return: void
 */
void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		if ((i / 10 = 9) && (i % 10 = 8))
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
