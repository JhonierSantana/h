#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, r;
	char *buff;
	if (filename == NULL)
		return (0);

	buff = (char *)malloc(((sizeof(char)) * letters) + 1);
	if (buff == NULL)
		return (0);
	fd = open(*filename, O_RDONLY);
	if (fd == -1)
	{
		free(buff);
		return (0);
	}

	r = read(fd, buff, letters);

	if (r == -1)
	{
		free(buff);
		close(fd);
		return (0);
	}
	close(fd);
	free(buff);
	return (r);
}
