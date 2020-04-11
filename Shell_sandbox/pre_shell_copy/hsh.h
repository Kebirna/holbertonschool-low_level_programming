#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <sys/types.h>

int non_interactive_mode();
int _interactive(char **av __attribute__((unused)));
int necklace_pearls(char *buffer);
char **parsing(char *buffer, int characters);
int execo(char **args);
char **_path();
char *_insert_path(char **args, char **path);

#endif
