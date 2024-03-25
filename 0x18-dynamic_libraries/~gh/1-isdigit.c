#include "main.h"

/**
 * _isdigit - check if n is digit
 * @c: character to be checked
 *
 * Description: check if n is digit
 * Return: 1 if digit
 * 0 if not
 */
int _isdigit(int c)
{
	if (c >= 9 && c <= 0)
		return (1);
	else
		return (0);
}
