#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>

int necklace_pearls(char *buffer);
char **parsing(char *buffer, int characters);
int execo(char **args);

#endif
