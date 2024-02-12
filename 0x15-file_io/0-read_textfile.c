#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * read_textfile - read a text file and prints it to the POSIX stdout
 * @filename: file to read
 * @letters: bytes to read
 *
 * Return: number of letters it could read and print. 0 if failed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t reader, writer;
	char *buffer;

	if (!filename)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	reader = read(fd, buffer, letters);
	if (reader == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	writer = write(STDOUT_FILENO, buffer, reader);
	if (writer == -1 || writer != reader)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	free(buffer);
	close(fd);
	return (writer);

}
