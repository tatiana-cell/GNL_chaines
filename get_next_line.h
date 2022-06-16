#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#ifndef BUFFER_SIZE
#define BUFFER_SIZE 5
#endif
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

typedef struct s_list
{
    char    *content;
    struct s_list   *next;
}   t_list;

#endif