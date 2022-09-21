#include "main.h"

/**
 * rev_string - reverse string
 * @s: char pointer of the string to be reversed
 *
 * Return: void
 */

void rev_string(char *s)
{
	int l, i, j;
	char ch;

	/** find string lenth without null character */
	for (l = 0; s[l] != '\0'; l++)
	;

	i = 0;
	j = l / 2;
	/** swap string by looping to half the string length */
	while (j--)
	{
		ch = s[l - i - 1];
		s[l - i - 1] = s[i];
		s[i] = ch;
		i++;
	}
}
