#ifndef INCLUDES_H
# define INCLUDES_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include  <sys/types.h>
#include  <sys/stat.h>
#include  <fcntl.h>
#include  <stdlib.h>

//void gd_putnbr(int nb);=)
// void gd_putchar(char c);
void gd_putstr(char *str);
// int gd_strlen(char *str);
int gd_atoi(char *str);

#define VRAIS 1
#define FAUX 0

typedef int BOOLEAN;

typedef struct mystruct{
    int minutes;
    int hours;
}   type_struct;

typedef struct my_list {
    int nbr;
    struct mylst *next;
}   type_lst;

#endif
