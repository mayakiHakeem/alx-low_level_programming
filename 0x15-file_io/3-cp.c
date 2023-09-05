#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

/**
 * main - copies content of a file to another
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 (always)
 */
int main (int argc, char *argv[])
{
	int fdr, fdw;
	ssize_t reader, writer;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", argv[0]);
		return (97);
	}

	fdr = open(argv[1], O_RDONLY);
        fdw = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	reader = read(fdr, buffer, sizeof(buffer));
	writer = write(fdw, buffer, reader);
	if (fdr == -1 || reader == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		return (98);
	}
	if (fdw == -1 || writer == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		return (99);
	}

	if (close(fdr) == -1)
	{
		dprintf(2, "Error: Can't close fd %i\n", fdr);
		return (100);
	}
	if (close(fdw) == -1)
	{
		dprintf(2, "Error: Can't close fd %i\n", fdw);
		return (100);
	}

	return (0);
}
