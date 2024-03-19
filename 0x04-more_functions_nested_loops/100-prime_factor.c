#include <stdio.h>

int isPrime(long int number);
/**
 * main - print highest prime number
 *
 * Return: 0 (success)
 */
int main(void)
{
	long int num;
	long int i, largestPrime = 2;

	while (num % 2 == 0)
	{
		largestPrime = 2;
		num /= 2;
	}

	for (i = 3; i * i <= num; i += 2)
	{
		if (num % i == 0 && isPrime(i))
		{
			largestPrime = i;
			num /= i;
		}
	}

	if (num > 2 && isPrime(num))
		largestPrime = num;

	printf("Largest Prime Factor: %ld\n", largestPrime);

	return (0);
}

/**
 * isPrime - check if an int is prime
 * @number: number to check
 *
 * Return: 0 (false) | 1 (true)
 */
int isPrime(long int number)
{
	long int i;

	if (number <= 1)
		return (0);

	for (i = 2; i * i <= number; i++)
	{
		if (number % i == 0)
			return (0);
	}

	return (1);
}
