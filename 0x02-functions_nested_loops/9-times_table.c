#include <stdio.h>

/**
 * times_table - print 9 multi table
 *
 * Return: void
 */
void times_table(void)
{
	int i, j, mul;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			mul = j * i;
			if (mul <= 9)
			{
				if (j != 0)
					putchar(' ');
				putchar(mul + '0');
				if (j != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
			if (mul > 9)
			{
				putchar((mul / 10) + '0');
				putchar((mul % 10) + '0');
				if (j != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
		putchar('\n');
	}
}
