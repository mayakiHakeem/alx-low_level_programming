#include <stdio.h>

/**
 * main - Entry Point
 * Description: print specially ordered 4 digits number combination
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k, l;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			for (k = '0'; k <= '9'; k++)
			{
				for (l = '1'; l <= '9'; l++)
				{
					if (((k + l) > (i + j) &&  k >= i) || i < k)
					{
						putchar(i);
						putchar(j);
						putchar(32);
						putchar(k);
						putchar(l);
					if (!((i + j + k == 35) && (i == '9')))
					{
						putchar(',');
						putchar(' ');
					}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
