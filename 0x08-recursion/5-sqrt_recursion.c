#include "main.h"

/**
 * check_sqrt - check if sqrt
 * @guess: sqrt guess
 *
 * Return: return guess
 */
int check_sqrt(int guess, int n)
{
	if (guess * guess == n)
		return (guess);
	else if (guess * guess > n)
		return (-1);
	return (check_sqrt((guess + 1), n));
}

/**
 * _sqrt_recursion - find natural sqrt of a number
 * @n: number to find sqrt for
 *
 * Return: natural sqrt
 * -1 if @n has no natural sqrt
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return(n);
	return (check_sqrt(2, n));
}
