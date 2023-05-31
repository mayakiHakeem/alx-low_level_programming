#include <stdio.h>
#include "main.h"

/**
 * rev_string - reverse string
 * @s: string to reverse
 *
 * Return: void
 */
void rev_string(char *s)
{
	int sum = 0;
	char *p1, *p2, store;

	while (s[sum] != '\0')
		sum++;

	p1 = s;
	p2 = s + sum - 1;

	while (p1 < p2)
	{
		store = *p1;
		*p1 = *p2;
		*p2 = store;

		p1++;
		p2--;
	}
}
