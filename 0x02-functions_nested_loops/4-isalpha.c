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
	if (c <= 'Z' && c >= 'A')
	{
		return (1);
	}
	else if (c <= 'z' && c >= 'a')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
