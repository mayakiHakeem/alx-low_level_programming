#include "main.h"
#include <unistd.h>
/**
 * _isalpha - Entry Point
 * Description - check if argument is an alphabet
 *@c: formal parameter of the function
 * Return: 1 for True and 0 for False
 */
int _isalpha(int c)
{
	int i;

	i = 'A';
	j = 'a';
	while ((i >= 'A' && i <= 'Z') || (j >= 'a' && j <= 'z'))
	{
		if (c == i || c == j)
		{
			return (1);
		}
		i++;
	}
	return (0);
}
