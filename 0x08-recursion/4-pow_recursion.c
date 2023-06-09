#include "main.h"

/**
 * _pow_recursion - compute value of x to power y
 * @x: base number
 * @y: power number
 *
 * Return: power value if @y is +ive
 * -1 if @y is -tive
 */
int _pow_recursion(int x, int y)
{
	if ( y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y-1));
}
