#ifndef _SEARCH_ALG
#define _SEARCH_ALG

#include <stdio.h>

/* FUNCTION PROTOTYPES */

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_array(int *array, size_t floor, size_t ceiling);
#endif
