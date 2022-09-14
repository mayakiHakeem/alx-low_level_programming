#include <unistd.h>
#include "main.h"

/**
 *_islower - Entry Point
 * Description: checks for lowercase character
 *@c: the integeral argument
 * Return: 1 if True and 0 if false
 */
int _islower(int c)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (c == i)
		{
			return (1);
		}
	}
		return (0);
}
