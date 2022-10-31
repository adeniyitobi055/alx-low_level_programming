#include "main.h"

/**
 * append_text_to_file - Adds text to an existing file.
 * @filename: filename.
 * @text_content: content of file.
 *
 * Return: 1 on success, -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int numletters;
	int pwr;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (numletters = 0; text_content[numletters]; numletters++)
			;

		pwr = write(fd, text_content, numletters);

		if (pwr == -1)
			return (-1);
	}

	close(fd);

	return (1);
}
