#include "main.h"

/**
 * _isupper - check if an argument is uppercase
 * @c: integral formal parameter
 * Return: 1 if uppercase 0 if otherwise
 */

int _isupper(int c)
{
		if (c >= 65 && c <= 90)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}
