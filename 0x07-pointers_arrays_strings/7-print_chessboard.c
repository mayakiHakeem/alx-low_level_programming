#include "main.h"

/**
 * 7-print_chessboard - print chesboard
 * @a: array to be printed
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int i, j;
	for (i = 0; i < 8; i++)
	{
		for (j = 0;  j < 8; j++)
		{
			if (i == 0 || i == 7)
			{
				_putchar(a[i][j]);
				if (j == 7)
					_putchar('\n');
			}
		}
	}
}
