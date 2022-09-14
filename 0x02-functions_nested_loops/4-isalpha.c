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
	while ((i >= 'A' && i <= 'Z') || (i >= 'a' && i <= 'z'))
	{
		if (c == i)
		{
			return (1);
		}
		i++;
	}
	return (0);
}
