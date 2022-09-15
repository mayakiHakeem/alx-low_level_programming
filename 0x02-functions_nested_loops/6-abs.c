#include <unistd.h>
#include "main.h"

/**
 * _abs - entry point
 * Description: print absolute of number
 * @n: formal parameter
 * Return: integer
 */
int _abs(int n)
{
	int n;

	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}

}
