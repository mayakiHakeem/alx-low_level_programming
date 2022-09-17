#include "main.h"
#include <unistd.h>

/**
 * print_square - print square of # characters
 *@size: integral formal parameter
 * Return: void
 */

void print_square(int size)
{
	int i, height, length;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (height = 1; height <= size; height++)
		{
			for (length = 1; length <= size; length++)
			{
				_putchar('#');
			}
		}
	}
}

