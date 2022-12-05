#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
    if (filename == NULL)
        return (0); 

    size_t a = letters;

    int fd = open(*filename, O_RDONLY);
    printf("%d\n %s", fd, a);

    return (fd);
}
