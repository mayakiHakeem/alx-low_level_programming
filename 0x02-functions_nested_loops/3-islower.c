#include <unistd.h>
#include "main.h"

/**
 *islower - Entry Point
 * Description: checks for lowercase character
 *@c: the integeral argument
 * Return: 1 if True and 0 if false
 */
int _islower(int c)
{
	int i;

	if (122 >= c >= 97)
	{
	return (1);
	}
	return (0);
}
