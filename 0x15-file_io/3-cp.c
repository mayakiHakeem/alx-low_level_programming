#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

/* Function prototypes*/
int closer(int fd);
int open_src(const char *filename);
int open_dest(const char *filename);
int copy_file(int src_fd, int dest_fd);

/**
 * main - copies content of file to another file
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int fdr, fdw, result;

	if (argc != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", argv[0]);
		return (97);
	}

	fdr = open_src(argv[1]);
	if (fdr == -1)
		return (98);

	fdw = open_dest(argv[2]);
	if (fdw == -1)
	{
		close(fdr);
		return (99);
	}

	result = copy_file(fdr, fdw);

	if ((closer(fdr) | closer(fdw)) < 0)
		return (100);

	return (result);
}

/**
 * closer - close opened fd
 * @fd: file descriptor
 *
 * Return: n, same as close
 */
int closer(int fd)
{
	int n;

	n = (close(fd));
	if (n < 0)
		dprintf(2, "Error: Can't close fd %d", fd);
	return (n);
}

/**
 * open_src - open source file
 * @filename: filename to be opened
 *
 * Return: fd of src file
 */
int open_src(const char *filename)
{
	int fdr;

	fdr = open(filename, O_RDONLY);
	if (fdr == -1)
		dprintf(2, "Error: Can't open file %s\n", filename);
	return (fdr);
}

/**
 * open_dest - open dest file
 * @filename: filename to write to
 *
 * Return: fd of the dest file
 */
int open_dest(const char *filename)
{
	int fdw;

	fdw = open(filename, O_WRONLY | O_CREAT | O_EXCL | O_TRUNC, 0664);
	if (fdw == -1)
		dprintf(2, "Error: Can't open file %s\n", filename);
	return (fdw);
}

/**
 * copy_file - copy src to dest
 * @src_fd: source file descriptor
 * @dest_fd: destination file descriptor
 *
 * Return: 0 (success)
 */
int copy_file(int src_fd, int dest_fd)
{
	ssize_t reader, writer;
	char buffer[1024];

	while ((reader = read(src_fd, buffer, sizeof(buffer))) > 0)
	{
		writer = write(dest_fd, buffer, reader);
		if (reader == -1)
		{
			dprintf(2, "Error: Can't read from file descriptor %i\n", src_fd);
			return (98);
		}
		if (writer == -1)
		{
			dprintf(2, "Error: Can't write to file descriptor %i\n", dest_fd);
			return (99);
		}
	}

	return (0);
}
