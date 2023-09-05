#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "main.h"

/**
 * append_text_to_file - append text at the end of a file
 * @filename: name of the file
 * @text_content: string to add at end of file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i;
	ssize_t writer;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (i = 0; text_content[i]; i++)
			;
		writer = write(fd, text_content, i);
		if (writer == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
