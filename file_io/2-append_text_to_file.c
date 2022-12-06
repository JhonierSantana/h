#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: File
 * @text_content: NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wi, a;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1 || (text_content == NULL && fd == -1))
		return (-1);
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
