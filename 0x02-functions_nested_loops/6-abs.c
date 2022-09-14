#include <unistd.h>
#include "main.h"

/**
 * _abs - entry point
 * Description: print absolute of number
 * @int: type of formal parameter
 * @n: formal parameter
 * Return: integer
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}

}
