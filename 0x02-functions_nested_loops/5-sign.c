#include "main.h"

/**
 * print_sign - write sign to stdout
 * @n: number to be checked
 *
 * Description: check sign of @n and write it to stdout
 * Return: if positive 1.
 * 0 if 0.
 * if negative -1
 */
int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('+');
		return (1);
	}
}
