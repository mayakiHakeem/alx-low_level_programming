#include "main.h"

/**
 * _sqrt_recursion - returns natural square root
 *@n: number to find natural square root of
 *
 * Return: natural sqroot of @n
 */
int _sqrt_recursion(int n)
{
	int sqroot_finder(int n, int sqroot_suspect);

	int sqroot_suspect = 1;

	return (sqroot_finder(n, sqroot_suspect));
}

/**
 * sqroot_finder - finds the square root
 *@n: number to find square root for
 *@sqroot_suspect: guess
 *
 * Return: square root
 */
int sqroot_finder(int n, int sqroot_suspect)
{
	if (sqroot_suspect * sqroot_suspect == n)
		return (sqroot_suspect);
	if (sqroot_suspect < n / 3)
		return (sqroot_finder(n, sqroot_suspect + 1));
	return (-1);
}
