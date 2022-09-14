#include <unistd.h>
#include "main.h"

/**
 * _abs - entry point
 * Description: print absolute of number
 * @int: type of formal parameter
 * Return: Always 0 Success
 */
int _abs(int);
{
	int x, y;

	y = x * -1;

	if (x < 0)
	{
		_putchar(y);
	}
	else
	{
		_putchar(x);
	}
	return (0);
}
