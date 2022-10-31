#include "main.h"

/**
 * create_file - creates a file.
 * @filename: filename.
 * @text_content: content of the file.
 *
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int numletters;
	int pwr;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	for (numletters = 0; text_content[numletters]; numletters++)
		;

	pwr = write(fd, text_content, numletters);

	if (pwr == -1)
		return (-1);

	close(fd);

	return (1);
}
