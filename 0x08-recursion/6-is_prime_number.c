#include "main.h"

/**
 * is_prime_number - check if prime number
 * @n: number to be checked
 *
 * Return: 1 if prime, otherwise 0
 */
int is_prime_number(int n)
{
	int check_prime(int n, int pr);

	int pr = 2;

	return (check_prime(n, pr));
}

/**
 * check_prime -helper functio tcheck prime
 *@n: number to check
 *@pr: prime divisor
 *
 * Return: 1 if prime, 0 if otherwise
 */
int check_prime(int n, int pr)
{
	if (n < 2)
		return (0);
	if (n == 2)
		return (1);

	if (n % pr == 0 && n != pr)
		return (0);
	if (n == pr)
		return (1);

	return (check_prime(n, pr + 1));
}
