#include <unistd.h>
#include "main.h"

/**
 * _abs - entry point
 * Description: print absolute of number
 * @int: type of formal parameter
 * Return: Always 0 Success
 */
int _abs(int n);
{
	if (n < 0)
	{
		_putchar(-n);
	}
	else
	{
		_putchar(n);
	}
	return (0);
}
