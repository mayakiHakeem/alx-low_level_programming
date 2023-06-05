#include "main.h"
#include <limits.h>

/**
 * _atoi - convert string to integer
 * @s: string to convert
 *
 * Return: converted integers (success)
 */
int _atoi(char *s)
{
	int digit, num = 0, sign = 1;
	int vel = 0;
	while (*s == ' ')
		s++;

	while ((*s == '-') || (*s == '+'))
	{
		if (*s == '-')
		{
			sign *= -1;
			s++;
		}
		else if (*s == '+')
			s++;
	}

	while (*s != '\0')
	{
		if (*s >= '0' && *s <= '9')
		{
			digit = *s - '0';

			if ((num > INT_MAX - digit) / 10)
				return (sign == 1? INT_MAX : INT_MIN);

			num = num * 10 + digit;
			vel = 1;
		}
		else if (vel && (*s != ' ' || *(s + 1) >= '0' || *(s + 1) <= '9'))
			break;
		s++;
	}
	return (num * sign);
}
