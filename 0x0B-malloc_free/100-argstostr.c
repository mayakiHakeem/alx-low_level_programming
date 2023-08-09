#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: arguments counter
 * @av: arguments vector
 *
 * Return: pointer to a ew string
 * Null if it fails
 */
char *argstostr(int ac, char **av)
{
	int i, j, k = 0;
	int len = 0;
	char *ptr_array;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
		len++;
	}

	ptr_array = malloc(len * sizeof(char));

	if (ptr_array == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++, k++)
			ptr_array[k] = av[i][j];
		if (i < ac - 1)
		{
			ptr_array[k] = '\n';
			k++;
		}
	}
	ptr_array[k] = '\n';
	return (ptr_array);
}
