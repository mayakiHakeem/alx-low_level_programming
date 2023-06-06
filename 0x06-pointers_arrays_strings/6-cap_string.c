#include "main.h"

/**
 * cap_string - capitalize all words of string
 * @str: string to capitalize
 *
 * Return: capitalized string (success)
 */
char *cap_string(char *str)
{
	int i = 0;
	int capitalize = 1;

	while (str[i] != '\0')
	{
		switch (str[i])
		{
		case '\n':
		case ' ':
		case '\t':
		case ',':
		case ';':
		case '.':
		case '!':
		case '?':
		case '"':
		case '(':
		case ')':
		case '{':
		case '}':
			capitalize = 1;
			break;
		default:
			if (capitalize)
			{
				if (str[i] >= 'a' && str[i] <= 'z')
					str[i] -= 32;
				capitalize = 0;
			}
			break;
		}
		i++;
	}
	return (str);
}
