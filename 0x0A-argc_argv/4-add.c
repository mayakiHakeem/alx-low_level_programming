#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * Description: Add positive numbers
 *@argc: argument count
 *@argv: argument vector
 *
 * Return: 0 (success)  if error.
 */
int main(int argc, char *argv[])
{
	int sum = 0, i, j;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}
