#ifndef HEADER_H
#define HEADER_H

#include <stdio.h>
#include <stdlib.h>

typedef struct my_struct
{
        int data;
        struct my_struct *next;
}my_struct;

int print_single();



#endif