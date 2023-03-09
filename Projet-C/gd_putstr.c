#include "include.h"

void gd_putstr(char *str){
    int i=0
    while(str[i]){
        i++;
    }
    write(1, str , i);
}