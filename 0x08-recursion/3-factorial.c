#include "main.h"

/**
 * factorial - compute factorial of param
 * @n: integer to compute factorial for
 *
 * Return: factorial of +tive n (success)
 * Return: -1 for -tive n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
