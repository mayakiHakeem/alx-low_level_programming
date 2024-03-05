#include <stdio.h>

/**
 * main - print first 100 fibonacci
 *
 * Return: 0
 */
int main(void)
{
	int i;
	unsigned long int prev = 0, now = 1, final;
	unsigned long int prev_part1, prev_part2, now_part1, now_part2;
	unsigned long int final1, final2;

	for (i = 1; i <= 92; i++)
	{
		final = prev + now;
		printf("%lu", final);
		prev = now;
		now = final;

		printf(", ");
	}

	prev_part1 = prev / 10000000000;
	prev_part2 = prev % 10000000000;
	now_part1 = now / 10000000000;
	now_part2 = now % 10000000000;

	for (i = 93; i <= 98; i++)
	{
		final1 = prev_part1 + now_part1;
		final2 = prev_part2 + now_part2;

		if (prev_part2 + now_part2 > 9999999999)
		{
			final1 += 1;
			final2 %= 10000000000;
		}
		printf("%lu%lu", final1, final2);

		if (i != 98)
			printf(", ");

		prev_part1 = now_part1;
		prev_part2 = now_part2;
		now_part1 = final1;
		now_part2 = final2;

	}

	printf("\n");

	return (0);
}
