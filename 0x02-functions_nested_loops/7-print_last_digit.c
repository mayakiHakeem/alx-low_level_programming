#include <unistd.h>
#include "main.h"

/**
 * print_last_digit - entry point
 * Description: print last deigit of entered number
 * @n: formal parameters
 * Return: an integer
 */

int print_last_digit(int n)
{
	int last = n % 10;

	if (n < 0)
	{
		last = -(last);
	}
	_putchar(last + '0');
	return (last);
}
