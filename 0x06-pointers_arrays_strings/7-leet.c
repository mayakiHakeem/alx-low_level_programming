#include "main.h"

/**
 * leet - transform string to leet
 * @str: string to transform
 *
 * Return: leet str(success)
 */
char *leet(char *str)
{
	int i, j;
	char flag[] = "aAeEoOtTlL";
	char repl[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; flag[j] != '\0'; j++)
		{
			if (str[i] == flag[j])
			{
				str[i] = repl[j];
				break;
			}
		}
	}
	return (str);
}
