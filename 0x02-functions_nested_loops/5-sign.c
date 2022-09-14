#include <unistd.h>
#include "main.h"

/**
 * print_sign - entry point
 * Description: print entry point of sign
 * @n: formal parameter of the argument
 * Return: 0 if n == 0, 1 if n == positive and -1 if n == negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(0);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
