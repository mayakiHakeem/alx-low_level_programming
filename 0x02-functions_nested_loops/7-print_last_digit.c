#include "main.h"
#include <unistd.h>

/**
 * print_last_digit - write to stdout
 * @n: the number to be evaluated
 *
 * Description: return last digit
 * Return: last digit (Success)
 */
int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;
	if (last_digit < 0)
		last_digit = -last_digit;
	_putchar(last_digit + '0');
	return (last_digit);
}
