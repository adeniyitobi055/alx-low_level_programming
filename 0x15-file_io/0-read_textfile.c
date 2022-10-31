#include "main.h"

/**
 * read_textfile - reads a text file and prints it to POSIX
 * standard output.
 * @filename: filename.
 * @letters: number of letters printed.
 *
 * Return: number of letters printed. If failed return 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t nrd, nwr;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));

	if (buf == NULL)
		return (0);

	nrd = read(fd, buf, letters);
	nwr = write(STDOUT_FILENO, buf, nrd);

	close(fd);

	free(buf);

	return (nwr);
}
