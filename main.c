#include "get_next_line.h"
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main()
{
    int fd;
    char *line;

    fd = open("test.txt", O_RDWR);
    line = get_next_line(fd);
    
    while (line)
    {
        printf("%s", line);
        free(line);
        line = get_next_line(fd);
    }
    //system("leaks a.out");
}