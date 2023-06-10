#include "main.h"

/**
 * _isdigit - check if number
 * @c: param to be checked
 *
 * Decription: check if param is number
 * Return: 1 on digit
 * 0 if not
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
