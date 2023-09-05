#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file to create
 * @text_content: content to created file
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t writer;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	writer = write(fd, text_content, _strlen(text_content));
	if (writer == -1)
		return (-1);

	return (1);
}

/**
 * _strlen - get len of str
 * @str: string
 *
 * Return: len of str
 */
int _strlen(char *str)
{
	int len, i;

	i = 0;
	while (str[i])
	{
		len++;
		i++;
	}
	return (len);
}
