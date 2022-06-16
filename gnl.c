#include "get_next_line.h"

int found_newline(t_list *stash)
{
    int     i;
    t_list  *current;

    if (stash== NULL)
        return (0);
    current =     
}


char*get_next_line(int fd)
{
    static t_list   *stash = NULL;
    char    *line;
    int     readed; // nombre de chars read par fnc read

    if (fd < 0|| BUFFER_SIZE <= 0 || read(fd, &line, 0))
        return (NULL);
    readed = 1;
    line = NULL;
    // 1. read from fd and add to linkedlist
    read_and_stash(fd, &stash, &readed);
    if (stash == NULL)
        return NULL;
    // 2. extract from stash to line
    // 3.clean up stash
    return (line);

}
void    read_and_stash(int fd, t_list **stash, int *readed_ptr)
{
    char    *buf;
    buf = malloc(sizeof(char) * (BUFFER_SIZE + 1));
    if (buf == NULL)
        return;
    while (!found_newline( *stash) && *readed_ptr != 0)        
    {
         *readed_ptr = read(fd, buf, BUFFER_SIZE);
         if ((*stash == NULL && readed_ptr == 0) || *readed_ptr = -1)
         {
             free(buf);
             return;
         }
         buf[*readed_ptr] = '\0';
    }
   
   
}







int main()
{
    int fd;
    char    *line;

    fd = open("simple", O_RDONLY);
    while (1)
    {
        line = get_next_line(fd);
        if (line == NULL) // la fin du fichier
            break;
        printf("%s", line);
        free(line);
    }

    return (0);
}