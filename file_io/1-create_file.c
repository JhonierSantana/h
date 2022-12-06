#include "main.h"

int create_file(const char *filename, char *text_content)
{
	int fd, w, a;

	if (filename == NULL)
			return (-1);
	
	
	fd = open(filename, O_RDWR, O_TRUNC);
	if (fd == -1)
			fd = open(filename, O_RDWR, O_CREAT, O_TRUNC);
	
	if(text_content)
	{
		for (a = 0; text_content[a], a++);
		w = write(fd, text_content, a);
		if (a == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
