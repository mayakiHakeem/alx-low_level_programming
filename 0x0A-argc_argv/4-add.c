#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point to the program
 * @argc: argument count
 * @argv: argument vector
 *
 * Description: add digit arguments
 * Return: Always 0 (Success) 1 if non-digit
 */
int main(int argc, char *argv[])
{
	int sum, i;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]))
			    sum += atoi(argv[i]);
			else
			    {
				    printf("Error\n");
				    return (1);
			    }
		}
	}
		printf("%d\n", sum);
		return (0);
}
