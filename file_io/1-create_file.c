#include "main.h"

/**
 * create_file - creates a file.
 * @filename: File to create
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on fail
 */

int create_file(const char *filename, char *text_content)
{
	int fd, wi, a;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_TRUNC);
	if (fd == -1)
		fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (text_content)
	{
		for (a = 0; text_content[a]; a++)
			continue;
		wi = write(fd, text_content, a);
		if (wi == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
