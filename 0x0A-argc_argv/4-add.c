#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive number
 * @argc: argument count
 * @argv: argument vector
 * 
 * Return: 0 (success), 1 (failure)
 */
int main(int argc, char *argv[])
{
  int i, j, result = 0;

  for (i = 1; i < argc; i++)
  {
    for (j = 0; argv[i][j] != '\0'; j++)
    {
      if (argv[i][j] < '0' || argv[i][j] > '9')
      {
	printf("Error\n");
	return(1);
      }
    }
      result += atoi(argv[i]);
  }
  printf("%d\n", result);
  return(0);
}
