#include <stdio.h>
#include <stdlib.h>

/**
 * strtow - split strings into words
 * @str: string to split
 *
 * Return: ptr to array of words
 */
char **strtow(char *str)
{
	char **words;
	unsigned int i;

	for ()
	{}
}

/**
 * word_count - count number of words in a str
 * @str: string to count
 *
 * Return: number of words in string
 */
int *word_count(char *str)
{
	unsigned int i = 0;

	if (str != NULL && str != "")
	{
		for (i = 0; str[i]; i++)
			if (str[i] == " ")
				break;
	}

	for (; str[i]; i++)
	{
		if (str[i - 1] != " " && str[i] == " ")
			cou
}
