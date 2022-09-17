#include "main.h"

/**
 * _isupper - check if an argument is uppercase
 * @c: integral formal parameter
 * Return: 1 if uppercase 0 if otherwise
 */

int _isupper(int c)
{
	for (i = 'A'; i <= 'Z'; i++)
	{
		if (c == i)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}
