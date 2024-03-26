#include <unistd.h>

/**
 * _isalpha - check if alphabet
 * @c: the character to be checked
 *
 * Description: check if @c is alphabet
 * Return: on letterr 1.
 * otherwise 0.
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
