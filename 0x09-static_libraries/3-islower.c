#include "main.h"

/**
 * _islower - check case
 * @c: the character to check
 *
 * Description: check if @c is lower case
 * Return: if lower 1
 * otherwise 0
 */
int _islower(int c)
{
	if (c > 96 && c <= 122)
		return (1);
	else
		return (0);
}
