#include "main.h"

/**
 * pow_recursion - print power
 * Description: implementation of the stdlip pow()
 * @x: base
 * @y: exponent
 *
 * Return: power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y-1));
}
