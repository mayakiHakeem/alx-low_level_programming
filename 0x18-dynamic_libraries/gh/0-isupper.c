#include "main.h"

/**
 * _isupper - check if upper
 * @c: character to be checked
 *
 * Description: check if character is upper
 * Return: 1 if upper
 * 0 if not
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
