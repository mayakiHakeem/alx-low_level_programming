#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - conc arguments to program
 * @ac: arg count
 * @av: arg vector
 *
 * Return: ptr to str
 */
char *argstostr(int ac, char **av)
{
	char *ptr_str;
	int i, j, total_len = 0, index = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		total_len += (_strlen(av[i]) + 1);

	ptr_str = malloc(sizeof(char) * total_len + 1);
	if (!ptr_str)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			ptr_str[index++] = av[i][j];
		ptr_str[index++] = '\n';
	}
	ptr_str[index] = '\0';
	return (ptr_str);
}
/**
 * _strlen - get length of string
 * @str: string
 *
 * Return: len
 */
int _strlen(char *str)
{
	int i, len = 0;

	for (i = 0; str[i] != '\0'; i++)
		len++;

	return (len);
}
