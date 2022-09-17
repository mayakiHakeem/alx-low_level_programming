#include "main.h"

/**
 * _isupper - check if an argument is uppercase
 * @c: integral formal parameter
 * Return: 1 if uppercase 0 if otherwise
 */

int _isupper(int c)
{
	int i;

	for (i = 65; i <= 90; i++)
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
