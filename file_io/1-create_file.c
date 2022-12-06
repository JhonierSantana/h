#include "main.h"

int create_file(const char *filename, char *text_content)
{
	int fd, r, w;
	char *buff;

	if (filename == NULL)
			return (0);
	
	buff = (char *)malloc(((sizeof(char)) * text_content) + 1);
	if (buff == NULL)
			return (0);
	
	fd = open(filename, O_CREAT, O_RDWR);
	if (fd == -1)
	{
		free(buff);
		return (0);
	}

	r = read(fd, buff, text_content);
	if (r == -1)
	{
		free(buff);
		close(fd);
		return(0);
	}
	buff[r] = '\0';
	w = write(STDOUT_FILENO, buff, r);
	if (w < 0 || w != r)
	{
		free(buff);
		close(fd);
		return (0);
	}
	close(fd);
	free(buff);
	return (r);
}
