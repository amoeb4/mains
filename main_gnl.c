#include "get_next_line.h"
#include "get_next_line_bonus.h"
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main()
{   
    int fd;
	fd = open("file.txt", O_RDONLY);
    printf("%s", get_next_line(fd));
    printf("%s", get_next_line(fd));
    printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
    printf("%s", get_next_line(fd));
    printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
    printf("%s", get_next_line(fd));
    printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
    printf("%s", get_next_line(fd));
    printf("%s", get_next_line(fd));  
	printf("%s", get_next_line(fd));
    printf("%s", get_next_line(fd));
    printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
    printf("%s", get_next_line(fd));
/*	printf("%s", get_next_line_bonus(fd));
    printf("%s", get_next_line_bonus(fd));
    printf("%s", get_next_line_bonus(fd));
    printf("%s", get_next_line_bonus(fd));
    printf("%s", get_next_line_bonus(fd));
    printf("%s", get_next_line_bonus(fd));
    printf("%s", get_next_line_bonus(fd));
    printf("%s", get_next_line_bonus(fd));
    printf("%s", get_next_line_bonus(fd));
    printf("%s", get_next_line_bonus(fd));
  	printf("%s", get_next_line_bonus(fd));
*/
	close(fd);
    return 0;
}
