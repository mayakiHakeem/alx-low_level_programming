#include "main.h"
#include <stdlib.h>

/**
 * _strdup -  returns ptr a space in memory of a copy of str parameter
 * @str: copied sring
 *
 * Return: 1 if size is 0, ptr to str if > 0. NULL if it fails
 */
char *_strdup(char *str)
{
	char *temp, *new_str, *ptr_newstr;
	int len = 0;

	temp = str;
	while (*temp != '\0')
	{
		len++;
		temp++;
	}

	new_str = malloc(sizeof(char) * (len + 1));
	ptr_newstr = new_str;

	if (new_str == NULL)
		return (NULL);

	while (*str != '\0')
	{
		*new_str = *str;
		new_str++;
		str++;
	}
	*new_str = '\0';

	return (ptr_newstr);
}
