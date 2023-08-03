#include "main.h"

/**
 * factorial - print factorial of param
 * Description - print factorial of integer param
 * @n: number to find factorial for
 *
 * Return: factorial of @n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (1);
	return (n * factorial(n-1));
}
