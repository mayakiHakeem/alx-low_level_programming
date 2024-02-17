#include <stdio.h>

/**
 * main - print sum of even fibonacci terms not > 4000000
 *
 * Return: 0 always success
 */
int main(void)
{
	long int num1 = 1, num2 = 2, fib, total = 2;
	int i;

	for (i = 0; i <= 48; i++)
	{
		fib = num1 + num2;
		if (fib > 4000000)
			break;
		num1 = num2;
		num2 = fib;

		if (fib % 2 == 0)
			total += fib;
	}

	printf("%ld\n", total);
	return (0);
}
