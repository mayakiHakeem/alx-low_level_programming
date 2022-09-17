#include "main.h"

/**
 * _isupper: entry point
 * description: checks for uppercase
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
