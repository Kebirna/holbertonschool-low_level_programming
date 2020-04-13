#ifndef HOLBERTON_H
#define HOLBERTON_H

#define _GNU_SOURCE
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <sys/types.h>

extern char **environ;

void change_equal_sig(char *str);
char *ret_path_line();
char **get_path(char *args);
char *_insert_path(char **args, char **path);
char **getenvpath();
void freedom(char **args, int size);
int non_interactive_mode();
int _interactive(char **av __attribute__((unused)));
int necklace_pearls(char *buffer);
char **parsing(char *buffer, int characters);
int execo(char **args);

#endif
